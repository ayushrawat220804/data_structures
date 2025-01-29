# autotype_wpm.py

def calculate_delay(words_per_minute):
    # Calculate delay for the selected WPM (Words Per Minute)
    return 60 / (words_per_minute * 5)  # Adjust delay per character