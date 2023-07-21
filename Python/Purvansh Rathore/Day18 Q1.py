def word_frequency(words_list):
    frequency_dict = {}
    for word in words_list:
        frequency_dict[word] = frequency_dict.get(word, 0) + 1
    return frequency_dict

# Example usage:
words_list = ["apple", "orange", "banana", "apple", "apple", "orange", "grape"]
result = word_frequency(words_list)
print(result)
