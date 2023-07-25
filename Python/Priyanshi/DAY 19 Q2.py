def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        mid_value = arr[mid]

        if mid_value == target:
            return mid
        elif mid_value < target:
            left = mid + 1
        else:
            right = mid - 1
    return left
sorted_list = [2, 5, 7, 8, 10, 15]
target_number = 9
result = binary_search(sorted_list, target_number)
if result < len(sorted_list) and sorted_list[result] == target_number:
    print(f"Target number {target_number} found at index {result}.")
else:
    print(f"Target number {target_number} should be inserted at index {result} to maintain the sorted order.")
