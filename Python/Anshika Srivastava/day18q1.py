''' Write a Python function that takes a list of words as input and returns a dictionary where the keys are the words
and the values are the frequencies of those words in the list.'''

def freq(words):
    word_freq = {}
    for i in words:
        word_freq[i] = word_freq.get(i, 0) + 1
    return word_freq

words = input("Enter a list of words separated by spaces\n ").split()
result = freq(words)
print(result)
