# Q2 Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet).
#  Display an appropriate message.
import string
def is_pangram(sentence):
    sentence = sentence.lower()
    letters = set()
    for char in sentence:
        if char.isalpha():
            letters.add(char)
    return len(letters) == 26

sentence = input("Enter a sentence: ")
if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
