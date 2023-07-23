def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return left
  
input_list = input("Enter the sorted list of numbers separated by spaces: ").split()
num = int(input("Enter the target number: "))
result = binary_search(input_list, numb)
if input_list[result] == num:
  print(f"Target number {num} found at index {result}.")
else:
  print(f"Target number {num} not found. It should be inserted at index {result} to maintain the sorted order.")
