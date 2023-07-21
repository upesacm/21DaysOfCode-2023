
# 2. Write a Python program that implements a binary search algorithm to search for a target number in a sorted list.
# If the target number is found, display its index. If the target number is not found, display the index where it should be inserted to maintain the sorted order.

def binary_search(arr, target):
    low, high = 0, len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return low


sorted_list = [1, 3, 5, 7, 9, 11, 13, 15]
target_number = 7

result = binary_search(sorted_list, target_number)


if sorted_list[result] == target_number:
    print(f"Element {target_number} found at index {result}.")
else:
    print(f"Element {target_number} not found. It should be inserted at index {result} to maintain sorted order.")


