# autotype_afk.py

import pyautogui
import random
import time

def simulate_afk():
    """Simulate AFK actions like small mouse movements or random delays."""
    # Move the mouse slightly to simulate activity
    x, y = pyautogui.position()
    pyautogui.moveTo(x + random.randint(-10, 10), y + random.randint(-10, 10), duration=0.2)
    time.sleep(random.uniform(0.2, 0.5))