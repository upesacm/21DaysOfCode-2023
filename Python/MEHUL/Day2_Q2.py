sentence = input("Enter a sentence: ")

words = sentence.split()

word_count = []

for w in words:
    word_count.append(w)

Nwords = len(word_count)

print(f"No.of words in the sentences are: {Nwords}")