def is_palindrome(word):
    word = word.lower()
    if word == word[::-1]:
        return True
    else:
        return False


Word= input("Enter a word\n")
if is_palindrome(Word):
    print("The word is a palindrome.")
else:
    print("The word is not a palindrome.")
