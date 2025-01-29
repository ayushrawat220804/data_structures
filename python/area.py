import pyautogui

print("Move your mouse to the top-left corner of the typing test area and press Enter...")
input()
top_left = pyautogui.position()

print("Now move your mouse to the bottom-right corner of the typing test area and press Enter...")
input()

bottom_right = pyautogui.position()

width = bottom_right[0] - top_left[0]
height = bottom_right[1] - top_left[1]

print(f"Word region: (left={top_left[0]}, top={top_left[1]}, width={width}, height={height})")



