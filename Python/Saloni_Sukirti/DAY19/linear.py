# Python

# 1. Write a Python program that implements a linear search algorithm to find a specific element in a given list.
# Display a message indicating whether the element is found or not.

def linear_search(arr, target):
    for index, element in enumerate(arr):
        if element == target:
            return index
    return -1

my_list = [10, 23, 45, 7, 15, 67, 98, 3, 100]
target_element = 15
result = linear_search(my_list, target_element)
if result != -1:
    print(f"Element {target_element} found at index {result}.")
else:
    print(f"Element {target_element} not found in the list.")
