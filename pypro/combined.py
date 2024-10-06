import requests
from bs4 import BeautifulSoup
import csv
import os

# Step 1: Send an HTTP request to the website
URL = "https://www.reddit.com"
response = requests.get(URL)

# Check if the request was successful (status code 200)
if response.status_code == 200:
    print("Successfully fetched the page.")
else:
    print(f"Failed to retrieve the page. Status code: {response.status_code}")
    exit()

# Step 2: Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(response.content, 'html.parser')

# Scrape Links
print("\n--- Extracting Links ---")
links = soup.find_all('a')  # Find all anchor tags

# Print the number of links found
print(f"Found {len(links)} links.")

# Save links to a CSV file
if len(links) > 0:
    with open('scraped_links.csv', 'w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        writer.writerow(['Link Text', 'URL'])  # CSV header

        for link in links:
            text = link.get_text().strip() or "No Text"  # Handle empty link text
            url = link.get('href')
            writer.writerow([text, url])

    print("Scraped links saved to 'scraped_links.csv'.")
else:
    print("No links found on the page.")

# Scrape Images
print("\n--- Extracting Images ---")
images = soup.find_all('img')  # Find all image tags

# Print the number of images found
print(f"Found {len(images)} images.")

# Save image URLs to a CSV file
if len(images) > 0:
    with open('scraped_images.csv', 'w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        writer.writerow(['Image URL'])  # CSV header

        for img in images:
            img_url = img.get('src')  # Extract image source
            if img_url:
                writer.writerow([img_url])

    print("Scraped image URLs saved to 'scraped_images.csv'.")

    # Step 5 (Optional): Download the images
    download_dir = 'downloaded_images'
    os.makedirs(download_dir, exist_ok=True)  # Create directory if it doesn't exist

    for idx, img in enumerate(images):
        img_url = img.get('src')
        if img_url:
            try:
                # If the URL is relative, convert it to absolute
                if not img_url.startswith('http'):
                    img_url = URL + img_url

                img_data = requests.get(img_url).content  # Download the image
                img_name = f"image_{idx + 1}.jpg"  # Create a filename
                with open(os.path.join(download_dir, img_name), 'wb') as img_file:
                    img_file.write(img_data)  # Save the image

                print(f"Downloaded {img_name}")
            except Exception as e:
                print(f"Failed to download image {img_url}: {e}")
else:
    print("No images found on the page.")
