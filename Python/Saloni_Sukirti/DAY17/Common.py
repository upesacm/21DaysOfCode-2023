# Python

# 1. Write a Python function that takes two lists as input and returns a new list 
#containing only the common elements between the two input lists.


def find_common_elements(list1, list2):
    common_elements = list(set(list1) & set(list2))
    return common_elements

list1 = [1, 2, 3, 4, 5]
list2 = [4, 5, 6, 7, 8]
result = find_common_elements(list1, list2)
print(result) 
