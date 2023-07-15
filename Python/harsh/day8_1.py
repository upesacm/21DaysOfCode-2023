def count_word_frequency(sentence):
    words = sentence.split()
    word_frequency = {}
    for word in words:
        if word in word_frequency:
            word_frequency[word] += 1
        else:
            word_frequency[word] = 1
    return word_frequency

sentence = input("Enter a sentence: ")
result = count_word_frequency(sentence)
for word, frequency in result.items():
    print(f"{word}: {frequency}")
