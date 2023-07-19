'''1. Write a function that accepts two lists of integers and returns a new list containing the common elements between the two lists, without duplicates.

Example:
Input: [1, 2, 3, 4, 5], [4, 5, 6, 7, 8]
Output: [4, 5]
'''
def find_common_elements(list1, list2):
  
    set1 = set(list1)
    set2 = set(list2)

    common_elements = set1.intersection(set2)

    return list(common_elements)
input_list1 = input("Enter elements for list 1 (comma-separated): ")
list1 = [int(item) for item in input_list1.split(",")]
input_list2 = input("Enter elements for list 2 (comma-separated): ")
list2 = [int(item) for item in input_list2.split(",")]
result = find_common_elements(list1, list2)
print("Common elements:", result)
