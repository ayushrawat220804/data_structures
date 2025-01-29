import requests
import time
import os

def download_file(url, save_to_disk=False, file_path="data_waster_temp"):
    try:
        print(f"Starting download from {url}")
        response = requests.get(url, stream=True)
        response.raise_for_status()  # Raise HTTPError for bad responses

        # Optionally save the file
        if save_to_disk:
            with open(file_path, 'wb') as f:
                for chunk in response.iter_content(chunk_size=8192):
                    f.write(chunk)
            print(f"File saved to {file_path}")
        else:
            # Consume the content without saving
            for _ in response.iter_content(chunk_size=8192):
                pass
            print("Download complete, data discarded.")
    except Exception as e:
        print(f"An error occurred: {e}")

def start_data_waster(url, iterations=10, delay=1, save_to_disk=False):
    for i in range(iterations):
        print(f"Iteration {i + 1}/{iterations}")
        download_file(url, save_to_disk)
        time.sleep(delay)  # Delay between downloads
    print("Finished wasting data!")

# Example usage
if __name__ == "__main__":
    # Replace with a large file URL you have permission to use
    TEST_URL = "https://example.com/largefile.zip"  # Use a valid URL
    ITERATIONS = 5
    DELAY = 2  # seconds
    SAVE_TO_DISK = False  # Change to True to save files to disk

    start_data_waster(TEST_URL, iterations=ITERATIONS, delay=DELAY, save_to_disk=SAVE_TO_DISK)
