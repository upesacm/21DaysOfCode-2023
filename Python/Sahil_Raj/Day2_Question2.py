#2. Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.
def count_words(sentence):
    words = sentence.split()
    return len(words)

# Take input from the user
sentence = input("Enter a sentence: ")

# Call the function to count words
word_count = count_words(sentence)

# Print the result
print(f"The number of words in the sentence is: {word_count}")
