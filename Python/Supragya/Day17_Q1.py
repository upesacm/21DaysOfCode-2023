# Q1 Write a Python function that takes two lists as input and returns a new list containing only 
# the common elements between the two input lists.
def common_elements(list1, list2):
    set1 = set(list1)
    set2 = set(list2)
    common_elements = set1.intersection(set2)
    return list(common_elements)

def input_list(prompt):
    input_str = input(prompt)
    return list(map(int, input_str.split()))

list1 = input_list("Enter the first list of integers separated by spaces: ")
list2 = input_list("Enter the second list of integers separated by spaces: ")
result = common_elements(list1, list2)
print("Common elements:", result)

