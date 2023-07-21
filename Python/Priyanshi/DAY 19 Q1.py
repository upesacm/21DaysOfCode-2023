def linear_search(arr, target):
    for i, element in enumerate(arr):
        if element == target:
            return i
    return -1
sample_list = [5, 10, 3, 7, 2, 8, 15]
target_element = 8
result = linear_search(sample_list, target_element)
if result != -1:
    print(f"Element {target_element} found at index {result}.")
else:
    print(f"Element {target_element} not found in the list.")
