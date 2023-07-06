#1. Write a Python program that takes an integer as input and determines whether it is even or odd.

# Get the input integer from the user
number = int(input("Enter an integer: "))

# Check if the number is divisible by 2 using modulo operator
if number % 2 == 0:
    # If yes, print that it is even
    print(number, "is even")
else:
    # If no, print that it is odd
    print(number, "is odd")



#2. Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.

# Get the input sentence from the user
sentence = input("Enter a sentence: ")

# Split the sentence into a list of words
words = sentence.split()

# Get the length of the list
word_count = len(words)

# Print the word count
print("The sentence has", word_count, "words")