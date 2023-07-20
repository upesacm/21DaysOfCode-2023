def find_common_elements(list1, list2):
    # Use set intersection to find common elements
    common_elements = list(set(list1) & set(list2))
    return common_elements

# Example usage:
list1 = [1, 2, 3, 4, 5]
list2 = [3, 4, 5, 6, 7]
result = find_common_elements(list1, list2)
print(result)  # Output: [3, 4, 5]
