#1. Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. Display the dictionary with word frequencies.
def word_frequency(sentence):
    words = sentence.split()
    frequency = {}
    for word in words:
        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1
    return frequency

sentence = input("Enter a sentence: ")
frequency = word_frequency(sentence)
print(frequency)


#2. Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.

import string

def is_pangram(sentence):
    alphabet = set(string.ascii_lowercase)
    sentence = sentence.lower()
    sentence_letters = set()
    for char in sentence:
        if char.isalpha():
            sentence_letters.add(char)
    return sentence_letters == alphabet

sentence = input("Enter a sentence: ")
if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
