import requests
from bs4 import BeautifulSoup
import csv

# Step 1: Send an HTTP request to Google.com
URL = "https://www.facebook.com"
response = requests.get(URL)

# Check the response status code to ensure the request was successful (200 is OK)
if response.status_code == 200:
    print("Successfully fetched the page.")
else:
    print(f"Failed to retrieve the page. Status code: {response.status_code}")

# Step 2: Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(response.content, 'html.parser')

# Print the page title to confirm we fetched the correct page
print("Page title:", soup.title.get_text())

# Step 3: Try to find a few common elements (Google homepage is minimal in content)
# Here we try to find all 'a' (link) tags
links = soup.find_all('a')

# Print how many links were found
print(f"Found {len(links)} links.")

# Step 4: Save the links to a CSV file (optional step, just for demonstration)
if len(links) > 0:
    with open('scraped_data.csv', 'w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        writer.writerow(['Link Text', 'URL'])  # CSV header

        for link in links:
            text = link.get_text().strip() or "No Text"  # Handle cases where link has no text
            url = link.get('href')
            writer.writerow([text, url])

    print("Scraped data saved to 'scraped_data.csv'.")
else:
    print("No links found on the page.")
