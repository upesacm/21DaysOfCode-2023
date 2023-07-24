def linear_search(arr, target):
    for index, element in enumerate(arr):
        if element == target:
            return index
    return -1

# Example usage:
if __name__ == "__main__":
    input_list = [1, 3, 5, 7, 9, 11, 13, 15]
    search_element = 7

    result = linear_search(input_list, search_element)

    if result != -1:
        print(f"Element {search_element} found at index {result}.")
    else:
        print(f"Element {search_element} not found in the list.")
