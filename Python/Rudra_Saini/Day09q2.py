import string

def is_pangram(sentence):
    alphabet = set(string.ascii_lowercase)
    sentence = sentence.lower()
    sentence = ''.join(filter(str.isalpha, sentence))
    sentence_letters = set(sentence)
    return sentence_letters == alphabet

sentence = input("Enter a sentence: ")
if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
