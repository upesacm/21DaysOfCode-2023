#Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.
s=input("Enter the sentence:")
count=0
for i in range (len(s)):
    if s[i]==' ':
        count+=1
print("Number of words:", count)