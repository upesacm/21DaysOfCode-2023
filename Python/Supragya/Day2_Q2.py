#Q2 Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.
sentence = input("Enter a sentence ")
sentence = sentence.split()
count=0
for word in sentence:
    count+=1
print("Numeber of Words in Sentence is ",count)
