import string

def is_pangram(sentence):
    sentence = sentence.lower()
    alphabet = set(string.ascii_lowercase)

    for char in sentence:
        if char.isalpha():
            alphabet.discard(char)

    return len(alphabet) == 0


sentence = "The quick brown fox jumps over the lazy dog"
if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")

