def is_palindrome(word):
    reversed_word = word[::-1]
    return reversed_word
    
word = input("Enter the word: ")

reversed_word = is_palindrome(word)

if word==reversed_word:
    print(f"{word} is a palindrome")
else:
    print(f"{word} is not a palindrome")
