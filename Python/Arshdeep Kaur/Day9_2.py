#Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.

str1 = input("Enter the string: ")
count = 0
alphabets = "abcdefghijklmnopqrstuvwxyz"

for char in alphabets:
    if char in str1.lower():
        count = count + 1
        
if (count == 26):
    print("The sentence is a pangram")
else:
    print("The sentence is not a pangram")
