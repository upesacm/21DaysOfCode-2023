# 2. Write a Python program that defines a function is_palindrome(word) which takes 
# a string as input and checks if it is a palindrome. A palindrome is a word that 
# reads the same forwards and backward. The function should return True if the word
# is a palindrome and False otherwise. The program should prompt the user to enter 
# a word and display whether it is a palindrome or not.

def is_palindrome(word):
    reversed_word = word[::-1]
    if word == reversed_word:
        return True
    else:
        return False

user_word = input("Enter a word: ")
if is_palindrome(user_word):
    print(user_word, "is a palindrome.")
else:
    print(user_word, "is not a palindrome.")