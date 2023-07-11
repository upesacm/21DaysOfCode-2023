def count_word_frequency(sentence):
    words = sentence.lower().split()
    frequency = {}

    for word in words:
        frequency[word] = frequency.get(word, 0) + 1

    return frequency


sentence = "The quick brown fox jumps over the lazy dog"
word_frequency = count_word_frequency(sentence)

print("Word Frequencies:")
for word, count in word_frequency.items():
    print(f"{word}: {count}")

