#Write a Python function that takes a list of words as input and returns a dictionary where the keys are the words and the values are the frequencies of those words in the list.

def countFrequency(list1):
    
    frequency = {}
    
    for item in list1:
        if item in frequency:
            frequency[item] += 1
            
        else:
            frequency[item] = 1

    return frequency


list1 = []

num = int(input("Enter the length of list: "))
for i in range(num):
    ele = input("Enter the words: ")
    list1.append(ele)

print(countFrequency(list1))
