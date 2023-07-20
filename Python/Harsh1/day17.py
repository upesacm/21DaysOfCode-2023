'''Write a Python function that takes two lists as input and returns a new list containing only the common elements between the two input lists.'''

#sol
n1=set(input("Enter list with spaces:").split())
n2=set(input("Enter list with spaces:").split())

list_final=list(n1.intersection(n2))
list1=list(n1)
list2=list(n2)
print(f'The list entered by the user is {list1} and {list2}. The common elements between two input list is {list_final}')


'''Write a Python program to count the frequency of each element in a list and returna dictionary with the elements as keys and their frequencies as values.'''

#sol
n=input('Enter of list with spaces:').split()
list1=list(map(int, n))

dictionary={}

for number in list1:
    if number in dictionary:
        dictionary[number]+=1
    else:
        dictionary[number]=1
print(dictionary)

