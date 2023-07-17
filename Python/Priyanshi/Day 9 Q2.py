def is_pangram(sentence):
    alphabet = set("abcdefghijklmnopqrstuvwxyz")
    sentence = sentence.lower()
    s_chars = set(sentence.replace(" ", ""))
    return s_chars == alphabet
sentence = input()
if is_pangram(sentence):
    print("The sentence is a pangram")
else:
    print("The sentence is not a pangram")
