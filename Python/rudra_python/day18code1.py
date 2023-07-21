def word_frequency(words_list):
    word_count = {}

    for word in words_list:
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1

    return word_count

# Example usage:
words_list = ["apple", "banana", "orange", "apple", "banana", "apple"]
result = word_frequency(words_list)
print(result)
