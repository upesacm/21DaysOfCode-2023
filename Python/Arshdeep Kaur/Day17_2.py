#Write a Python program to count the frequency of each element in a list and return a dictionary with the elements as keys and their frequencies as values.

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
    ele = input("Enter the element: ")
    list1.append(ele)

print(countFrequency(list1))
