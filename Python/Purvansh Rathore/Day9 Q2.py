#DAY 9 Question 2

import string

def is_pangram(sentence):
    sentence = sentence.lower()
    alphabet = set(string.ascii_lowercase)
    sentence_letters = set(sentence.replace(" ", ""))
    
    return sentence_letters == alphabet

sentence = input("Enter a sentence: ")

if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
