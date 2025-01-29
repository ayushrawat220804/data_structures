# autotype_seconds.py

import tkinter as tk
from tkinter import simpledialog, messagebox

def open_custom_time_window(time_var):
    """Open a new window to enter custom time."""
    custom_window = tk.Toplevel()
    custom_window.title("Enter Custom Time")
    custom_window.geometry("300x100")

    tk.Label(custom_window, text="Enter typing duration in seconds:", font=("Helvetica", 12)).pack(pady=10)
    custom_time_entry = tk.Entry(custom_window, font=("Helvetica", 12))
    custom_time_entry.pack(pady=5)

    def submit_custom_time():
        custom_time = custom_time_entry.get()
        if custom_time.isdigit() and int(custom_time) > 0:
            time_var.set(custom_time)
            custom_window.destroy()
        else:
            messagebox.showerror("Invalid input", "Please enter a valid number of seconds.")

    tk.Button(custom_window, text="Submit", command=submit_custom_time, font=("Helvetica", 12), bg="blue", fg="white").pack(pady=10)