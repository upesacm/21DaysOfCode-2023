# 2. Write a Python program that prompts the user to enter a filename and tries to open the file.
# Handle the FileNotFoundError exception and display an appropriate message.
import os
import sys

try:
    filename = input("Enter the filename: ")
    # f = open(filename)
    
    with open(os.path.join(sys.path[0], filename), "r") as f:
        print(f.read())

except FileNotFoundError:
    print("Sorry try again FileNotFoundError occured")