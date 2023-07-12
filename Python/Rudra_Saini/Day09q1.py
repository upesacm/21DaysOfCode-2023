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
frequency_dict = count_word_frequency(sentence)

print("Word Frequencies:")
for word, count in frequency_dict.items():
    print(f"{word}: {count}")
