# Write a function that accepts two lists of integers and returns a new list containing the common elements between the two lists,
# without duplicates.

# Example:
# Input: [1, 2, 3, 4, 5], [4, 5, 6, 7, 8]
# Output: [4, 5]


def common_elements(a,b):
    a=set(a)
    b=set(b)
    c=list(a.intersection(b))
    return c
    

a=input("Enter set1 (all integers seperated by space) : ")
b=input("Enter set2 (all integers seperated by space) : ")

a=list(map(int,a.split()))
b=list(map(int,b.split()))

print(f'List of common elements in the lists are : {common_elements(a,b)}')