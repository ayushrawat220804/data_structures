import pyautogui
import time
import keyboard
import random
import tkinter as tk
from tkinter import simpledialog, messagebox

import autotype_seconds as ats
import autotype_wpm as atw
import autotype_afk as afk
import autotype_capture as ac

def type_words(region, delay, space_limit=5):
    """Type words with a delay, re-capturing the screen after a certain number of spaces."""
    space_count = 0
    words = ac.capture_words(region)
    
    while words:
        for word in words:
            # Set a consistent typing speed with minimal random variation
            typing_delay = delay + random.uniform(-0.00001, 0.00001)  # Extremely small variation for ultra-fast typing
            pyautogui.typewrite(word + ' ', interval=typing_delay)
            space_count += 1

            # Re-capture the screen after a certain number of spaces
            if space_count >= space_limit:
                space_count = 0
                time.sleep(0.05)  # Smaller delay to allow the screen to update
                words = ac.capture_words(region)
                break  # Exit the loop to start typing from the new word list

            # Add occasional random pauses to mimic human typing
            if random.random() < 0.005:  # 0.5% chance to pause
                pause_duration = random.uniform(0.01, 0.02)  # Very short pause duration
                time.sleep(pause_duration)
        else:
            # If the loop wasn't broken, no more words to type
            break

def monkeytype_autotype(duration_seconds, region, delay, afk_ratio=0):
    """Automatically type words on Monkeytype for a specified duration with AFK simulation."""
    start_time = time.time()
    total_afk_time = 0
    max_afk_time = duration_seconds * afk_ratio

    print("Switch to the typing test area. Starting in 2 seconds...")
    time.sleep(2)

    while time.time() - start_time < duration_seconds:
        if keyboard.is_pressed('ctrl') and keyboard.is_pressed('alt'):
            print("\nBailed out! Exiting script.")
            break

        if total_afk_time < max_afk_time and random.random() < 0.2:  # 20% chance to simulate AFK
            afk.simulate_afk()
            afk_time = random.uniform(0.5, 1.5)
            total_afk_time += afk_time
            time.sleep(afk_time)
        else:
            type_words(region, delay, space_limit=5)

    print("\nTyping session complete.")

def center_window(root, width=800, height=600):
    """Center the Tkinter window on the screen."""
    screen_width = root.winfo_screenwidth()
    screen_height = root.winfo_screenheight()
    x = (screen_width // 2) - (width // 2)
    y = (screen_height // 2) - (height // 2)
    root.geometry(f'{width}x{height}+{x}+{y}')

def start_gui():
    """Create a GUI for the user to select typing duration and speed."""
    def on_custom_selected(*args):
        if time_var.get() == "Custom":
            custom_time = simpledialog.askinteger("Custom Time", "Enter custom time in seconds:", minvalue=1)
            if custom_time is not None:
                time_var.set(str(custom_time))

    def start_typing():
        selected_time = time_var.get()
        selected_wpm = wpm_var.get()

        try:
            duration = int(selected_time)
        except ValueError:
            print("Invalid custom time entered.")
            return

        delay_per_word = atw.calculate_delay(int(selected_wpm))

        # Display countdown and start the autotype script
        for i in range(2, 0, -1):
            countdown_label.config(text=f"Starting in {i}...")
            root.update()
            time.sleep(1)

        countdown_label.config(text="")
        monkeytype_autotype(duration, word_region, delay_per_word)

    root = tk.Tk()
    root.title("Monkeytype Auto Typer")
    center_window(root)  # Center the window
    root.resizable(False, False)

    # Create frames for left and right sections
    left_frame = tk.Frame(root)
    right_frame = tk.Frame(root)

    left_frame.pack(side=tk.LEFT, padx=20, pady=20, fill=tk.BOTH, expand=True)
    right_frame.pack(side=tk.RIGHT, padx=20, pady=20, fill=tk.BOTH, expand=True)

    tk.Label(left_frame, text="Select Typing Duration:", font=("Helvetica", 14)).pack(pady=10)

    time_var = tk.StringVar(value="15")
    time_var.trace("w", on_custom_selected)  # Trace changes to time_var
    times = ["15", "30", "45", "60", "Custom"]

    for t in times:
        tk.Radiobutton(left_frame, text=f"{t} seconds", variable=time_var, value=t, font=("Helvetica", 12)).pack(anchor="w")

    tk.Label(right_frame, text="Select Typing Speed (WPM):", font=("Helvetica", 14)).pack(pady=10)

    wpm_var = tk.StringVar(value="100")
    wpms = ["25", "50", "75", "100", "150", "200"]  # Removed 250, 300, 500 WPM

    for wpm in wpms:
        tk.Radiobutton(right_frame, text=f"{wpm} WPM", variable=wpm_var, value=wpm, font=("Helvetica", 12)).pack(anchor="w")

    # Start button
    tk.Button(root, text="Start", command=start_typing, font=("Helvetica", 14), bg="blue", fg="white").pack(pady=10, side=tk.BOTTOM)

    # Countdown label
    countdown_label = tk.Label(root, text="", font=("Helvetica", 14))
    countdown_label.pack(pady=10, side=tk.BOTTOM)

    root.mainloop()

if __name__ == "__main__":
    # Load or select the word region
    word_region = ac.load_word_region()

    # Launch the GUI
    start_gui()