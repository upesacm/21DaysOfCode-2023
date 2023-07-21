# Q1 Write a Python function that takes a list of words as input and returns a dictionary where the keys
#  are the words and the values are the frequencies of those words in the list.
def word_frequency(words):
    word_freq = {}
    for word in words:
        word_freq[word] = word_freq.get(word, 0) + 1
    return word_freq

word_list = ['apple', 'banana', 'apple', 'orange', 'banana', 'apple']
result = word_frequency(word_list)
print(result)
