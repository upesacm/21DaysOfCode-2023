def binary_search(arr, target):
    low, high = 0, len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        mid_element = arr[mid]

        if mid_element == target:
            return mid
        elif mid_element < target:
            low = mid + 1
        else:
            high = mid - 1

    return low

# Example usage:
if __name__ == "__main__":
    sorted_list = [1, 3, 5, 7, 9, 11, 13, 15]
    search_element = 8

    result = binary_search(sorted_list, search_element)

    if sorted_list[result] == search_element:
        print(f"Element {search_element} found at index {result}.")
    else:
        print(f"Element {search_element} not found in the list. It should be inserted at index {result} to maintain the sorted order.")
