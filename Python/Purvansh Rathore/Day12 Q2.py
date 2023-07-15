filename = input("Enter the filename: ")

try:
    with open(filename, 'r') as file:
        # Perform operations on the file here
        print("File", filename, "opened successfully.")

except FileNotFoundError:
    print("Error: The file", filename, "was not found.")

except:
    print("An error occurred while trying to open the file.")
