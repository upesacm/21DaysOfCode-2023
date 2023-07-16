# Q1 Write a Python program that counts the frequency of each word in a given sentence and stores the result in a 
# dictionary. Display the dictionary with word frequencies.
str = input("Enter the sentence ")
str = str.split()
word_freq ={}
for word in str:
    word_freq[word]=word_freq.get(word,0)+1
dic = word_freq
for word,frequency in dic.items():
    print(f"{word}: {frequency}")
