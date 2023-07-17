# Python

# 1. Write a function that accepts two lists of integers and returns a new list
#containing the common elements between the two lists, without duplicates.

# Example:
# Input: [1, 2, 3, 4, 5], [4, 5, 6, 7, 8]
# Output: [4, 5]

def newlist(list1, list2):
    set1 = set(list1)
    set2 = set(list2)

    common_elements = set1.intersection(set2)
    print(list(common_elements))


list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))
newlist(list1, list2)
