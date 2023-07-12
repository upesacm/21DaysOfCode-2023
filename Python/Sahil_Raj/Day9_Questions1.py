# Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. Display the dictionary with word frequencies.

def count_word_frequency(sentence):
    # Remove punctuation marks and convert all words to lowercase
    sentence = sentence.lower().strip(".,?!")

    # Split the sentence into words
    words = sentence.split()

    # Create an empty dictionary to store word frequencies
    word_frequency = {}

    # Count the frequency of each word
    for word in words:
        if word in word_frequency:
            word_frequency[word] += 1
        else:
            word_frequency[word] = 1

    return word_frequency


# Get the input sentence from the user
sentence = input("Enter a sentence: ")

# Count the word frequency
frequency_dict = count_word_frequency(sentence)

# Display the dictionary with word frequencies
for word, frequency in frequency_dict.items():
    print(f"{word}: {frequency}")
