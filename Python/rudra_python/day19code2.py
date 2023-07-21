def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return left

# Example usage:
sorted_arr = [1, 3, 5, 7, 9, 11, 13]
target = 8
result = binary_search(sorted_arr, target)
print(f"Element {target} should be inserted at index {result}.")
