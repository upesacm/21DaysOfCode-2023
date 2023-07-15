#Write a Python program that prompts the user to enter a filename and tries to open the file. Handle the FileNotFoundError exception and display an appropriate message.

filename = input("Enter the filename: ")

try:
    with open(filename, 'r') as file:
        # File processing logic goes here
        print(f"File '{filename}' opened successfully.")
        # ...
except FileNotFoundError:
    print(f"File '{filename}' not found.")
