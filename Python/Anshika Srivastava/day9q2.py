import string

sentence = input("Enter sentence\n")
sentence = sentence.lower()
alphabet = string.ascii_lowercase

pangram = True

for char in alphabet:
    if char not in sentence:
        pangram = False
        break

if pangram:
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
