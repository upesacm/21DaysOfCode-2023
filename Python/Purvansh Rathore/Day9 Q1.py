#DAY 9 Question 1

def count_word_frequency(sentence):
    words = sentence.split()
    word_frequency = {}
    
    for word in words:
        if word in word_frequency:
            word_frequency[word] += 1
        else:
            word_frequency[word] = 1
    
    return word_frequency

def display_word_frequency(word_frequency):
    print("Word Frequencies:")
    for word, frequency in word_frequency.items():
        print(f"{word}: {frequency}")

sentence = input("Enter a sentence: ")
word_frequency = count_word_frequency(sentence)
display_word_frequency(word_frequency)
