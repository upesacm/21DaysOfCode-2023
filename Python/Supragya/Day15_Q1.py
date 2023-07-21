# Q1 1. Write a function that accepts two lists of integers and returns a new list containing the common 
# elements between the two lists, without duplicates.
def common_elements(list1, list2):
    set1 = set(list1)
    set2 = set(list2)
    common_elements = set1.intersection(set2)
    return list(common_elements)

list1 = list(map(int, input("Enter the elements of the first list (separated by spaces): ").split()))
list2 = list(map(int, input("Enter the elements of the second list (separated by spaces): ").split()))
result = common_elements(list1, list2)
print("Common elements:", result)
