import pyautogui
import time
import keyboard
import mouse
import random
import threading
import tkinter as tk
from tkinter import simpledialog, messagebox

import autotype_seconds as ats
import autotype_wpm as atw
import autotype_afk as afk
import autotype_capture as ac

stop_typing = False

def listen_for_stop():
    global stop_typing
    while True:
        if keyboard.is_pressed('esc') or mouse.is_pressed('left'):
            stop_typing = True
            messagebox.showinfo("Test Stopped", "Typing test stopped by user (Esc key or Left Click pressed).")
            break

def type_words(region, delay, space_limit=5):
    global stop_typing
    space_count = 0
    words = ac.capture_words(region)
    
    while words and not stop_typing:
        for word in words:
            if stop_typing:
                return
            typing_delay = delay + random.uniform(-0.000001, 0.000001)
            pyautogui.typewrite(word + ' ', interval=typing_delay)
            space_count += 1

            if space_count >= space_limit:
                space_count = 0
                time.sleep(0.05)
                words = ac.capture_words(region)
                break

            if random.random() < 0.005:
                pause_duration = random.uniform(0.01, 0.02)
                time.sleep(pause_duration)
        else:
            break

def monkeytype_autotype(duration_seconds, region, delay, afk_ratio=0, infinite=False):
    global stop_typing
    stop_typing = False
    threading.Thread(target=listen_for_stop, daemon=True).start()
    
    start_time = time.time()
    total_afk_time = 0
    max_afk_time = duration_seconds * afk_ratio if duration_seconds else 0

    print("Switch to the typing test area. Starting in 3 seconds...")
    time.sleep(3)

    while not stop_typing and (infinite or (time.time() - start_time < duration_seconds)):
        if total_afk_time < max_afk_time and random.random() < 0.2:
            afk.simulate_afk()
            afk_time = random.uniform(0.5, 1.5)
            total_afk_time += afk_time
            time.sleep(afk_time)
        else:
            type_words(region, delay, space_limit=5)
    
    print("\nTyping session complete.")

def center_window(root, width=900, height=500):
    screen_width = root.winfo_screenwidth()
    screen_height = root.winfo_screenheight()
    x = (screen_width // 2) - (width // 2)
    y = (screen_height // 2) - (height // 2)
    root.geometry(f'{width}x{height}+{x}+{y}')

def start_gui():
    def on_custom_selected(*args):
        if time_var.get() == "Custom Seconds":
            custom_time = simpledialog.askinteger("Custom Time", "Enter custom time in seconds:", minvalue=1)
            if custom_time is not None:
                time_var.set(str(custom_time))
        elif time_var.get() == "Custom Hours":
            custom_hours = simpledialog.askinteger("Custom Hours", "Enter custom time in hours:", minvalue=1)
            if custom_hours is not None:
                time_var.set(str(custom_hours * 3600))

    def start_typing():
        global stop_typing
        stop_typing = False
        selected_time = time_var.get()
        selected_wpm = wpm_var.get()

        try:
            if selected_time == "Infinite":
                duration = None
                infinite = True
            else:
                duration = int(selected_time)
                infinite = False
        except ValueError:
            print("Invalid custom time entered.")
            return

        delay_per_word = atw.calculate_delay(int(selected_wpm))

        for i in range(3, 0, -1):
            countdown_label.config(text=f"Starting {i}...")
            root.update()
            time.sleep(1)

        countdown_label.config(text="")
        monkeytype_autotype(duration, word_region, delay_per_word, infinite=infinite)

    root = tk.Tk()
    root.title("Monkeytype Auto Typer")
    center_window(root, width=900, height=500)
    root.resizable(False, False)

    left_frame = tk.Frame(root)
    right_frame = tk.Frame(root)

    left_frame.pack(side=tk.LEFT, padx=20, pady=10, fill=tk.BOTH, expand=True)
    right_frame.pack(side=tk.RIGHT, padx=20, pady=10, fill=tk.BOTH, expand=True)

    tk.Label(left_frame, text="Select Typing Duration:", font=("Helvetica", 14, 'bold')).pack(pady=10)

    time_var = tk.StringVar(value="15")
    time_var.trace("w", on_custom_selected)
    times = ["15", "30", "45", "60", "3600", "Custom Seconds", "Custom Hours", "Infinite"]

    for t in times:
        text = f"{t} seconds" if t.isdigit() else t
        tk.Radiobutton(left_frame, text=text, variable=time_var, value=t, font=("Helvetica", 12, 'bold')).pack(anchor="w")

    tk.Label(right_frame, text="Select Typing Speed (WPM):", font=("Helvetica", 14, 'bold')).pack(pady=10)

    wpm_var = tk.StringVar(value="100")
    wpms = ["25", "50", "75", "100", "150", "200"]

    for wpm in wpms:
        tk.Radiobutton(right_frame, text=f"{wpm} WPM", variable=wpm_var, value=wpm, font=("Helvetica", 12, 'bold')).pack(anchor="w")

    start_button = tk.Button(root, text="Start", command=start_typing, font=("Helvetica", 14, 'bold'), bg="blue", fg="white")
    start_button.pack(pady=20, side=tk.BOTTOM)

    countdown_label = tk.Label(root, text="Press 'Esc' or Left Mouse Click to stop immediately", font=("Helvetica", 12, 'bold'), fg="red", wraplength=850)
    countdown_label.pack(pady=10, side=tk.BOTTOM)

    root.mainloop()

if __name__ == "__main__":
    word_region = ac.load_word_region()
    start_gui()
