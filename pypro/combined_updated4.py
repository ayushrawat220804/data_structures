import requests
from bs4 import BeautifulSoup
import csv
import os
import time

# Helper function to ensure the URL has the proper format (https://www.example.com)
def format_url(url):
    if not url.startswith('http'):
        url = f"https://www.{url.lstrip('www.')}"
    return url

# Function to scrape links with a counter
def scrape_links(soup, output_file='scraped_links.csv'):
    links = soup.find_all('a')
    print(f"Found {len(links)} links.")
    
    # Ask user if they want to scrape links
    proceed = input(f"Do you want to scrape all {len(links)} links? (y/n): ").lower()
    if proceed != 'y':
        print("Skipping link scraping.")
        return

    start_time = time.time()
    if links:
        with open(output_file, 'w', newline='', encoding='utf-8') as file:
            writer = csv.writer(file)
            writer.writerow(['Link Text', 'URL'])  # CSV header
            
            for idx, link in enumerate(links, start=1):
                text = link.get_text().strip() or "No Text"
                url = link.get('href')
                writer.writerow([text, url])
                
                # Progress counter
                print(f"Scraping link {idx}/{len(links)}", end="\r")
                time.sleep(0.1)  # Slight delay to show the progress

        print(f"\nLinks saved to '{output_file}'.")
    
    end_time = time.time()
    print(f"Time taken to scrape links: {end_time - start_time:.2f} seconds.\n")

# Function to scrape images and save them in separate CSV files with a counter
def scrape_images_and_gifs(soup, base_url, images_output_file='scraped_images.csv', gifs_output_file='scraped_gifs.csv', download_dir='downloaded_images'):
    images = soup.find_all('img')
    print(f"Found {len(images)} images.")
    
    # Ask user if they want to scrape images and GIFs
    proceed = input(f"Do you want to scrape all {len(images)} images and GIFs? (y/n): ").lower()
    if proceed != 'y':
        print("Skipping image and GIF scraping.")
        return

    start_time = time.time()
    if images:
        os.makedirs(download_dir, exist_ok=True)
        
        with open(images_output_file, 'w', newline='', encoding='utf-8') as img_file, \
             open(gifs_output_file, 'w', newline='', encoding='utf-8') as gif_file:
            
            img_writer = csv.writer(img_file)
            gif_writer = csv.writer(gif_file)
            
            img_writer.writerow(['Image URL'])  # CSV header for images
            gif_writer.writerow(['GIF URL'])    # CSV header for GIFs
            
            for idx, img in enumerate(images, start=1):
                img_url = img.get('src')
                
                # Ask if user wants to continue, stop, or skip
                user_input = input(f"Scraping image {idx}/{len(images)} (type 'stop' to stop, 'skip' to skip remaining): ").lower()
                if user_input == 'stop':
                    print("Stopping image scraping.")
                    break
                elif user_input == 'skip':
                    print("Skipping the remaining images.")
                    break

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
                        img_name = f"image_{idx}.{file_extension}"
                        with open(os.path.join(download_dir, img_name), 'wb') as img_file:
                            img_file.write(img_data)
                        print(f"Downloaded {img_name}")
                    except Exception as e:
                        print(f"Failed to download {img_url}: {e}")

        print(f"\nImages saved to '{images_output_file}' and GIFs saved to '{gifs_output_file}'.")
    
    end_time = time.time()
    print(f"Time taken to scrape images and GIFs: {end_time - start_time:.2f} seconds.\n")

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
