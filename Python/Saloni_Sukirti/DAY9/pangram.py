
# 2. Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.

def pangram(string):
    for i in alphabet:
        if i not in string:
            print("Not Pangram")
            return
    print("Pangram")

string = input()

alphabet = "abcdefghijklmnopqrstuvwxyz"

string = string.lower()
pangram(string)


