# Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.

sentence=input("Enter sentence : ")
words=sentence.count(' ')+1
print(f'Number of words in "{sentence}" is {words}')