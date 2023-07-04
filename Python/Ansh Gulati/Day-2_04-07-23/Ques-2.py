#Ques- Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.

str1=str(input("Enter a Sentence: "))
words=str1.split()
count=0
for i in words:
    count+=1
print(count)
