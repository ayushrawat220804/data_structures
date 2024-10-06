import requests
from bs4 import BeautifulSoup
import csv
import os

# Helper function to ensure the URL has the proper format (https://www.example.com)
def format_url(url):
    if not url.startswith('http'):
        url = f"https://www.{url.lstrip('www.')}"
    return url

# Function to scrape links
def scrape_links(soup, output_file='scraped_links.csv'):
    links = soup.find_all('a')
    print(f"Found {len(links)} links.")
    
    if links:
        with open(output_file, 'w', newline='', encoding='utf-8') as file:
            writer = csv.writer(file)
            writer.writerow(['Link Text', 'URL'])  # CSV header
            
            for link in links:
                text = link.get_text().strip() or "No Text"
                url = link.get('href')
                writer.writerow([text, url])
        print(f"Links saved to '{output_file}'.")
    else:
        print("No links found.")

# Function to scrape images and save them in separate CSV files (images and GIFs)
def scrape_images_and_gifs(soup, base_url, images_output_file='scraped_images.csv', gifs_output_file='scraped_gifs.csv', download_dir='downloaded_images'):
    images = soup.find_all('img')
    print(f"Found {len(images)} images.")
    
    if images:
        os.makedirs(download_dir, exist_ok=True)
        
        with open(images_output_file, 'w', newline='', encoding='utf-8') as img_file, \
             open(gifs_output_file, 'w', newline='', encoding='utf-8') as gif_file:
            
            img_writer = csv.writer(img_file)
            gif_writer = csv.writer(gif_file)
            
            img_writer.writerow(['Image URL'])  # CSV header for images
            gif_writer.writerow(['GIF URL'])    # CSV header for GIFs
            
            for idx, img in enumerate(images):
                img_url = img.get('src')
                
                if img_url:
                    # Convert relative URL to absolute if needed
                    if not img_url.startswith('http'):
                        img_url = base_url + img_url
                    
                    # Check if it's a GIF or regular image
                    if img_url.endswith('.gif'):
                        gif_writer.writerow([img_url])
                    else:
                        img_writer.writerow([img_url])
                    
                    # Download images or GIFs
                    try:
                        img_data = requests.get(img_url).content
                        file_extension = 'gif' if img_url.endswith('.gif') else 'jpg'
                        img_name = f"image_{idx + 1}.{file_extension}"
                        with open(os.path.join(download_dir, img_name), 'wb') as img_file:
                            img_file.write(img_data)
                        print(f"Downloaded {img_name}")
                    except Exception as e:
                        print(f"Failed to download {img_url}: {e}")
        print(f"Images saved to '{images_output_file}' and GIFs saved to '{gifs_output_file}'.")
    else:
        print("No images or GIFs found.")

# Main function to scrape the website
def scrape_website(url):
    formatted_url = format_url(url)
    try:
        response = requests.get(formatted_url)
        if response.status_code == 200:
            print(f"Successfully fetched the page from {formatted_url}.")
            soup = BeautifulSoup(response.content, 'html.parser')
            
            print("\n--- Extracting Links ---")
            scrape_links(soup)
            
            print("\n--- Extracting Images and GIFs ---")
            scrape_images_and_gifs(soup, formatted_url)
        else:
            print(f"Failed to retrieve the page. Status code: {response.status_code}")
    except Exception as e:
        print(f"An error occurred: {e}")

# Driver code
if __name__ == "__main__":
    url = input("Enter the URL to scrape (e.g., example.com): ")
    scrape_website(url)
