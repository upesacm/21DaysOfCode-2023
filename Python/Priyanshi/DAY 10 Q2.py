def palindrome(word):
    r_word = word[::-1]
    if word.lower() == r_word.lower():
        return True
    else:
        return False
st= input()
if palindrome(st):
    print("Palindrome")
else:
    print("Not palindrome")
