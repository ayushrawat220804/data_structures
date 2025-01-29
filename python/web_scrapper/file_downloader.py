import os
import requests
from threading import Thread, Lock
from tqdm import tqdm  # For progress bar

# File path
FILE_NAME = "downloaded_file"

class Downloader:
    def __init__(self, url, file_name, num_threads=8):
        self.url = url
        self.file_name = file_name
        self.num_threads = num_threads
        self.lock = Lock()

    def get_file_size(self):
        """Get the size of the file."""
        response = requests.head(self.url, allow_redirects=True)
        if 'Content-Length' in response.headers:
            return int(response.headers['Content-Length'])
        raise Exception("Failed to get file size.")

    def download_chunk(self, start, end, index, results):
        """Download a file chunk."""
        headers = {'Range': f'bytes={start}-{end}'}
        response = requests.get(self.url, headers=headers, stream=True)
        chunk_file = f"{self.file_name}.part{index}"
        with open(chunk_file, 'wb') as f:
            f.write(response.content)
        with self.lock:
            results[index] = chunk_file

    def merge_files(self, results):
        """Merge all chunks into a single file."""
        with open(self.file_name, 'wb') as f:
            for part_file in sorted(results.values()):
                with open(part_file, 'rb') as pf:
                    f.write(pf.read())
                os.remove(part_file)

    def start_download(self):
        """Initiate the download process."""
        try:
            file_size = self.get_file_size()
            chunk_size = file_size // self.num_threads
            threads = []
            results = {}

            # Multithreaded download
            for i in range(self.num_threads):
                start = i * chunk_size
                end = file_size - 1 if i == self.num_threads - 1 else (start + chunk_size - 1)
                thread = Thread(target=self.download_chunk, args=(start, end, i, results))
                threads.append(thread)
                thread.start()

            # Display progress bar
            with tqdm(total=file_size, desc="Downloading", unit="B", unit_scale=True) as pbar:
                while any(t.is_alive() for t in threads):
                    downloaded_size = sum(os.path.getsize(f"{self.file_name}.part{i}") for i in results if f"{self.file_name}.part{i}" in results)
                    pbar.n = downloaded_size
                    pbar.refresh()

            for t in threads:
                t.join()

            # Merge chunks
            self.merge_files(results)
            print(f"Download completed: {self.file_name}")

        except Exception as e:
            print(f"Error: {e}")


if __name__ == "__main__":
    url = input("Enter the file URL: ").strip()
    file_name = input("Enter the desired file name: ").strip()
    downloader = Downloader(url, file_name)
    downloader.start_download()
