''' Write a Python program to count the frequency of each element in a list and return a dictionary with the elements as keys and their frequencies as values.'''

def freq(lst):
    fdict = {}
    for i in lst:
        if i in fdict:
            fdict[i] += 1
        else:
            fdict[i] = 1
    return fdict


value = input("Enter a list of elements (space-separated): ")
my_list = value.split()
result = freq(my_list)
print(result)
