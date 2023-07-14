def is_palindrome(word):
    rev=word[::-1]
    if rev==word:
        return True
    
word=input("Enter a word ")
if is_palindrome(word):
    print("The word is palindrome")
else:
    print("Word is not palindrome")

