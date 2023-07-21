def count_elements(lst):
    element_count = {}

    for element in lst:
        if element in element_count:
            element_count[element] += 1
        else:
            element_count[element] = 1

    return element_count

# Example usage:
lst = [1, 2, 1, 3, 4, 2, 1, 5, 2]
result = count_elements(lst)
print(result)
