def replace_newlines_with_spaces(input_file, output_file):
    try:
        # Open the input file and read all lines
        with open(input_file, 'r', encoding='latin-1') as file:  # Use 'latin-1' encoding to handle special characters
            content = file.read()

        # Replace newlines with spaces and ensure no extra spaces
        cleaned_content = ' '.join(content.splitlines()).replace('  ', ' ')
        while '  ' in cleaned_content:  # Remove all occurrences of multiple spaces
            cleaned_content = cleaned_content.replace('  ', ' ')

        # Write the cleaned content to the output file
        with open(output_file, 'w', encoding='latin-1') as file:
            file.write(cleaned_content)

        print(f"Newlines replaced with spaces. Cleaned file saved to: {output_file}")
    except FileNotFoundError:
        print(f"Error: File not found at {input_file}")
    except UnicodeDecodeError as e:
        print(f"Encoding error: {e}. Try a different encoding like 'windows-1252'.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

# Input and output file paths
input_file = r"C:\Users\rohit\data_structures\python\Ratatouille.txt"  # Update this with your input file path
output_file = r"C:\Users\rohit\data_structures\python\Ratatouille_cleaned.txt"  # Update this with your output file path

# Call the function to clean the file
replace_newlines_with_spaces(input_file, output_file)
