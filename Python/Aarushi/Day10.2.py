#2. Write a Python program that defines a function is_palindrome(word) which takes a string as input and checks if it is a palindrome. A palindrome is a word that reads the same forwards and backward. The function should return True if the word is a palindrome and False otherwise. The program should prompt the user to enter a word and display whether it is a palindrome or not.
def is_palindrome(word):
    word = word.lower()
    reverse_word = word[::-1]
    if word == reverse_word:
        return True
    else:
        return False

word = input("Enter a word: ")
if is_palindrome(word):
    print(f"{word} is a palindrome.")
else:
    print(f"{word} is not a palindrome.")
