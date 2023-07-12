
# Python

# 1. Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. Display the dictionary with word frequencies.

sentence = input()
dict = {}

sentence = sentence.lower()
sentence = sentence.split(" ")


for i in sentence:
    n = sentence.count(i)
    dict[i] = n

print(dict)