import requests
from bs4 import BeautifulSoup
import csv
import os

# Step 1: Send an HTTP request to the website
URL = "https://www.facebook.com"
response = requests.get(URL)

# Check if the request was successful (status code 200)
if response.status_code == 200:
    print("Successfully fetched the page.")
else:
    print(f"Failed to retrieve the page. Status code: {response.status_code}")
    exit()

# Step 2: Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(response.content, 'html.parser')

# Step 3: Find all image tags ('<img>') and extract their 'src' attributes
images = soup.find_all('img')

# Print how many images were found
print(f"Found {len(images)} images.")

# Step 4: Save the image URLs to a CSV file
if len(images) > 0:
    with open('scraped_images.csv', 'w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        writer.writerow(['Image URL'])  # CSV header

        for img in images:
            img_url = img.get('src')  # Extract the 'src' attribute
            if img_url:
                writer.writerow([img_url])  # Write each image URL to the CSV file

    print("Scraped image URLs saved to 'scraped_images.csv'.")

    # Step 5 (Optional): Download the images
    # You can also download the images if you want to save them locally.
    download_dir = 'downloaded_images'
    os.makedirs(download_dir, exist_ok=True)  # Create the directory if it doesn't exist

    for idx, img in enumerate(images):
        img_url = img.get('src')
        if img_url:
            try:
                # If the URL is relative (not starting with 'http'), make it absolute
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
