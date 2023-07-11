# Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.
 
import string

def is_pangram(sentence):
    # Convert the sentence to lowercase
    sentence = sentence.lower()

    # Remove punctuation marks and spaces
    sentence = sentence.translate(str.maketrans("", "", string.punctuation + " "))

    # Create a set to store the unique letters in the sentence
    unique_letters = set(sentence)

    # Check if the set of unique letters is equal to the set of all alphabets
    if len(unique_letters) == 26:
        return True
    else:
        return False


# Get the input sentence from the user
sentence = input("Enter a sentence: ")

# Check if the sentence is a pangram
if is_pangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")
