#Write a Python program that defines a function is_palindrome(word) which takes a string as input and checks if it is a palindrome. A palindrome is a word that reads the same forwards and backward. The function should return True if the word is a palindrome and False otherwise. The program should prompt the user to enter a word and display whether it is a palindrome or not.
def is_palindrome(word):
    if word == word[::-1]:
        return True
    else:
        return False
    
word = input("Enter a word: ")
is_palindrome(word)
if is_palindrome(word) == True:
    print("The word is a palindrome.")
else:
    print("The word is not a palindrome.")
