#Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. Display the dictionary with word frequencies.
str1 = input("Enter the string: ")
list1 = str1.split(" ")
dict1 = {}

for i in list1:
    x = dict1.get(i)
    if (type(x) != int):
        dict1[i] = 1
    else:
        dict1[i] = x + 1 

print(dict1)
