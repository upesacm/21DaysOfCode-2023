#Write a Python program that prompts the user to enter a filename and tries to open the file. Handle the FileNotFoundError exception and display an appropriate message.

name = input("Enter the full name of your file: ")

try:
    with open(name) as file:
        contents = file.read()
        print(contents)

except FileNotFoundError:
    print("Error! The file does not exist")
