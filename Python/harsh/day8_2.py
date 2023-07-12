import string

def is_pangram(sentence):
    alphabets = set(string.ascii_lowercase)
    sentence = sentence.lower()
    sentence = sentence.translate(str.maketrans('', '', string.punctuation))
    unique_chars = set(sentence)
    if unique_chars == alphabets:
        return True
    else:
        return False

sentence = input("Enter a sentence: ")

if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
