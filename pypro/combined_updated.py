import requests
from bs4 import BeautifulSoup
import csv
import os

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

# Function to scrape images (and GIFs)
def scrape_images(soup, base_url, output_file='scraped_images_and_gifs.csv', download_dir='downloaded_images'):
    images = soup.find_all('img')
    print(f"Found {len(images)} images.")
    
    if images:
        os.makedirs(download_dir, exist_ok=True)
        
        with open(output_file, 'w', newline='', encoding='utf-8') as file:
            writer = csv.writer(file)
            writer.writerow(['Image Type', 'Image URL'])  # CSV header
            
            for idx, img in enumerate(images):
                img_url = img.get('src')
                
                if img_url:
                    # Convert relative URL to absolute if needed
                    if not img_url.startswith('http'):
                        img_url = base_url + img_url
                    
                    file_extension = 'gif' if img_url.endswith('.gif') else 'jpg'
                    img_type = 'GIF' if file_extension == 'gif' else 'Image'
                    
                    writer.writerow([img_type, img_url])
                    
                    # Download images or GIFs
                    try:
                        img_data = requests.get(img_url).content
                        img_name = f"image_{idx + 1}.{file_extension}"
                        with open(os.path.join(download_dir, img_name), 'wb') as img_file:
                            img_file.write(img_data)
                        print(f"Downloaded {img_name}")
                    except Exception as e:
                        print(f"Failed to download {img_url}: {e}")
        print(f"Images and GIFs saved to '{output_file}'.")
    else:
        print("No images or GIFs found.")

# Main function to scrape the website
def scrape_website(url):
    try:
        response = requests.get(url)
        if response.status_code == 200:
            print("Successfully fetched the page.")
            soup = BeautifulSoup(response.content, 'html.parser')
            
            print("\n--- Extracting Links ---")
            scrape_links(soup)
            
            print("\n--- Extracting Images and GIFs ---")
            scrape_images(soup, url)
        else:
            print(f"Failed to retrieve the page. Status code: {response.status_code}")
    except Exception as e:
        print(f"An error occurred: {e}")

# Driver code
if __name__ == "__main__":
    url = input("Enter the URL to scrape: ")
    scrape_website(url)
