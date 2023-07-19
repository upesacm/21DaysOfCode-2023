#Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.
def pangram(sentence):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in sentence.lower():
            return False
    return True
sentence = input("Enter a sentence: ")
if pangram(sentence):
    print("The sentence is a pangram")
else:
    print("The sentence is not a pangram")
    
