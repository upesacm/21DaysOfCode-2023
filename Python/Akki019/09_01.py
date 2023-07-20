# Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. 
# Display the dictionary with word frequencies.

sentence=input("Enter sentence : ")
sentence=sentence.split()
dict={}

for word in sentence:
    if word in dict.keys():
        dict[word]+=1
    else:
        dict[word]=1

print(dict)
