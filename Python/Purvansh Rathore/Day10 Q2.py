def is_palindrome(word):
    reversed_word = word[::-1]  # Reverse the word using slicing
    if word.lower() == reversed_word.lower():
        return True
    else:
        return False

# Prompt the user to enter a word
word = input("Enter a word: ")

# Check if the word is a palindrome
if is_palindrome(word):
    print("The word is a palindrome.")
else:
    print("The word is not a palindrome.")
