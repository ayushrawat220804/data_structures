import requests
from bs4 import BeautifulSoup
import csv

# Step 1: Send an HTTP request to the URL
URL = "https://facebook.com"  # Replace with the actual target URL
response = requests.get(URL)

# Step 2: Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(response.content, 'html.parser')

# Step 3: Find the elements you want to scrape (e.g., article titles)
titles = soup.find_all('h2', class_='post-title')  # Replace with actual tag and class

# Step 4: Print and/or save the titles
for title in titles:
    print(title.get_text())

# Step 5: Save data to CSV
with open('scraped_data.csv', 'w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file)
    writer.writerow(['Title'])  # Add more columns if needed

    for title in titles:
        writer.writerow([title.get_text()])
