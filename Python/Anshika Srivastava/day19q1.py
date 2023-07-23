'''Write a Python program that implements a linear search algorithm to find a specific element in a given list. 
Display a message indicating whether the element is found or not.'''

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

input_list = input("Enter the list of elements separated by spaces: ")
my_list = [int(num) for num in input_list.split()]
key = int(input("Enter the element to search for: "))
result = linear_search(my_list, key)
if result != -1:
  print(f"Element {element_to_find} found at index {result}.")
else:
  print(f"Element {element_to_find} not found in the list."
