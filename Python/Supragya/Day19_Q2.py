# Q2 Write a Python program that implements a binary search algorithm to search for a target number in a sorted list. 
# If the target number is found, display its index. If the target number is not found, display the index where it should 
# be inserted to maintain the sorted order.
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

def main():
    num_elements = int(input("Enter the number of elements in the sorted list: "))
    sorted_list = []
    for i in range(num_elements):
        element = int(input(f"Enter element {i+1}: "))
        sorted_list.append(element)
    target_number = int(input("Enter the target number to search: "))
    index = binary_search(sorted_list, target_number)
    if index < len(sorted_list) and sorted_list[index] == target_number:
        print(f"The target number {target_number} is found at index {index}.")
    else:
        print(f"The target number {target_number} is not found. It should be inserted at index {index} to maintain the sorted order.")

if __name__ == "__main__":
    main()
