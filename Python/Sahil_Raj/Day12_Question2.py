#Write a Python program that prompts the user to enter a filename and tries to open the file. Handle the FileNotFoundError exception and display an appropriate message.
filename = input("Enter the filename: ")

try:
    with open(filename, 'r') as file:
        # Perform desired operations with the file
        print(f"Successfully opened the file: {filename}")
        # Continue with the rest of your code here

except FileNotFoundError:
    print(f"Error: File '{filename}' not found.")
