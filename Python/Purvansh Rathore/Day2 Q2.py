#DAY 2 Question 2

def count_words(sentence):
    words = sentence.split()
    return len(words)

# Take input
get = input("Enter a sentence: ")


word_count = count_words(get)

# Display
print("The sentence contains", word_count, "words.")
