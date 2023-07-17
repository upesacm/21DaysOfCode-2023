#2. Write a Python program that prompts the user to enter a filename and tries to open the file. Handle the FileNotFoundError exception and display an appropriate message.

def read_file(filename):
    try:
        with open(filename, 'r') as file:
            content = file.read()
            print("File content:")
            print(content)
    except FileNotFoundError:
        print(f"Error: File '{filename}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

filename = input("Enter the filename: ")
read_file(filename)

