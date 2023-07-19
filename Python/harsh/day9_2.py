def is_palindrome(word):
    reversed_word = word[::-1]
    if word == reversed_word:
        return True
    else:
        return False

user_word = input("Enter a word: ")

if is_palindrome(user_word):
    print(f"{user_word} is a palindrome.")
else:
    print(f"{user_word} is not a palindrome.")
