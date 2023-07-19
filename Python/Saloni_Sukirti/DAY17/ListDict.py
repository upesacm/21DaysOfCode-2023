# 2. Write a Python program to count the frequency of each element in a list and 
#return a dictionary with the elements as keys and their frequencies as values.


def ListDict(l):
    frequency_dict = {}
    for element in l:
        if element in frequency_dict:
            frequency_dict[element] += 1
        else:
            frequency_dict[element] = 1
    return frequency_dict
    

l = [1,2,7,5,6,1,7,8,9,0,3,4,5,5,6]
print(ListDict(l))