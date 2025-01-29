import pyautogui
import pytesseract
from PIL import Image
import json
import os
import time

# Configure pytesseract (update the path to your Tesseract-OCR installation)
pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

def capture_words(region):
    """Capture and extract words from the specified region on the screen."""
    screenshot = pyautogui.screenshot(region=region)
    text = pytesseract.image_to_string(screenshot)
    return text.split()

def select_word_region():
    """Allow the user to select the word region interactively."""
    print("Move your mouse to the top-left corner of the typing test area and press Enter...")
    input()
    x1, y1 = pyautogui.position()
    print(f"Top-left corner selected at ({x1}, {y1}).")

    # Adding a delay to give the user time to move the mouse
    time.sleep(2)

    print("Now move your mouse to the bottom-right corner of the typing test area and press Enter...")
    input()
    x2, y2 = pyautogui.position()
    print(f"Bottom-right corner selected at ({x2}, {y2}).")

    width = x2 - x1
    height = y2 - y1

    region = [x1, y1, width, height]
    delete_word_region_file()
    save_word_region(region)
    return region

def delete_word_region_file():
    """Delete the existing word region file if it exists."""
    if os.path.exists("word_region.json"):
        os.remove("word_region.json")
        print("Existing word_region.json file deleted.")

def save_word_region(region):
    """Save the word region coordinates to a file."""
    with open("word_region.json", "w") as file:
        json.dump(region, file)
    print(f"Word region saved to word_region.json: {region}")

def load_word_region():
    """Load the word region coordinates from the file."""
    if os.path.exists("word_region.json"):
        with open("word_region.json", "r") as file:
            region = json.load(file)
        print(f"Word region loaded from word_region.json: {region}")
        return region
    else:
        print("word_region.json not found. Please select the word region interactively.")
        return select_word_region()

if __name__ == "__main__":
    select_word_region()