'''Write a Python program that prompts the user to enter a filename and tries to open the file.
Handle the FileNotFoundError exception and display an appropriate message. '''

filename = input("Enter a filename: ")

try:
    with open(filename, 'r') as file:
        print("File opened successfully!")
except FileNotFoundError:
    print("Sorry file does not exist. Please check the filename and try again.")
