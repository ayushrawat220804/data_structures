import tkinter as tk
from tkinter import messagebox

# Initialize the main application window
root = tk.Tk()
root.title("Basic Tkinter App")
root.geometry("400x300")  # Set window size

# Function to handle button click
def on_button_click():
    user_text = entry.get()  # Get text from entry widget
    if user_text:
        messagebox.showinfo("User Input", f"You entered: {user_text}")
        label.config(text=f"Hello, {user_text}!")
    else:
        messagebox.showwarning("Input Needed", "Please enter some text!")

# Function to handle key press events
def on_key_press(event):
    label.config(text=f"Key pressed: {event.char}")

# Label widget
label = tk.Label(root, text="Welcome to Tkinter!", font=("Arial", 16))
label.pack(pady=10)  # Add padding around label

# Entry widget
entry = tk.Entry(root, width=30)
entry.pack(pady=5)

# Button widget
button = tk.Button(root, text="Click Me", command=on_button_click)
button.pack(pady=5)

# Canvas widget
canvas = tk.Canvas(root, width=200, height=100, bg="lightgray")
canvas.pack(pady=10)

# Draw a line on the canvas
canvas.create_line(0, 0, 200, 100, fill="blue", width=2)
canvas.create_rectangle(50, 25, 150, 75, outline="red", width=2)

# Bind the <KeyPress> event to the root window
root.bind("<KeyPress>", on_key_press)

# Start the Tkinter event loop
root.mainloop()
