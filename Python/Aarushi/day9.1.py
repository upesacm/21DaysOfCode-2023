#1. Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. Display the dictionary with word frequencies.
def count(elements):
    
    if elements[-1] == '.':
        elements = elements[0:len(elements) - 1]
 
   
    if elements in dictionary:
        dictionary[elements] += 1
 
    else:
        dictionary.update({elements: 1})
 
 

 
Sentence = input("enter your string:")
 
dictionary = {}
 
lst = Sentence.split()
 
for elements in lst:
    count(elements)
 
for allKeys in dictionary:
    print ("Frequency of ", allKeys, end = " ")
    print (":", end = " ")
    print (dictionary[allKeys], end = " ")
    print()
