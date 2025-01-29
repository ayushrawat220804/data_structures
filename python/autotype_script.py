import pyautogui
import time
import keyboard  # For monitoring keyboard input

# Function to read content from the text file
def read_file(file_path):
    try:
        # Use 'latin-1' or 'windows-1252' encoding to handle special characters
        with open(file_path, 'r', encoding='latin-1') as file:
            return file.read()
    except FileNotFoundError:
        print(f"Error: File not found at {file_path}")
        exit()
    except UnicodeDecodeError:
        print("Error: Unable to decode the file. Check the encoding.")
        exit()
    except Exception as e:
        print(f"An unexpected error occurred: {e}")
        exit()

# Function to simulate human-like typing
def type_text(file_path, delay=0.03):  # Adjusted delay for ~200 WPM
    text = read_file(file_path)
    print("Switch to the typing area now. You have 5 seconds...")
    time.sleep(5)  # Time to manually prepare and focus on the typing area

    print("Typing started. Press 'Alt' to bail out at any time.")
    for char in text:
        if keyboard.is_pressed('alt'):  # Check if 'Alt' is pressed
            print("\nBailed out! Exiting script.")
            break
        if char == '\n':  # Replace newline with space since monkeytype expects continuous text
            pyautogui.typewrite(' ')
        else:
            pyautogui.typewrite(char, interval=delay)

# Path to your text file
file_path = r"C:\Users\rohit\data_structures\python\StarWars-Episode4 (1).txt"  # Update the text file path

# Start typing
type_text(file_path)
