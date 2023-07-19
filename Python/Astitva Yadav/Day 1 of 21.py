#1. Write a Python program that prompts the user to enter their name and then prints a greeting message in the format "Hello, {Your Name}!".

# Prompt the user to enter their name
name = input("Enter your name: ")

# Print a greeting message in the format "Hello, {Your Name}!"
print(f"Hello, {name}!")



#2. Write a Python program that takes a sentence as input and prints the reverse of each word in the sentence. For example, if the input is "Hello World!", the output should be "olleH dlroW!".

# Get the input sentence from the user
sentence = input("Enter a sentence: ")

# Split the sentence into a list of words
words = sentence.split()

# Reverse each word in the list using slicing
reversed_words = [word[::-1] for word in words]

# Join the reversed words with spaces
reversed_sentence = " ".join(reversed_words)

# Print the reversed sentence
print(reversed_sentence)