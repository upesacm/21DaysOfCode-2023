def find_common_elements(list1, list2):
    common_elements = list(set(list1) & set(list2))
    return common_elements

# Example usage
list1 = [1, 2, 3, 4, 5]
list2 = [4, 5, 6, 7, 8]

common_elements = find_common_elements(list1, list2)
print("Common elements:", common_elements)

