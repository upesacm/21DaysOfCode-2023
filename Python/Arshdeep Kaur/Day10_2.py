"""
Write a Python program that defines a function is_palindrome(word) which takes a string as input and checks if it is a palindrome. A palindrome is a word that reads the same forwards and
backward. The function should return True if the word is a palindrome and False otherwise. The program should prompt the user to enter a word and display whether it is a palindrome or not.
"""

def is_Palindrome(word):
    length = len(word)
    i = 0
    j = length - 1

    word = word.lower()

    while (i < j):
        if (word[i] == word[j]):
            i = i+1
            j = j-1
        else:
            return False

    return True


string = input("Enter the string: ")
if (is_Palindrome(string)):
    print(string, "is a Palindrome")
else:
    print(string, "is not a Palindrome")
