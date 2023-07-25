def merge_sort_descending(nums):
    if len(nums) <= 1:
        return nums

    mid = len(nums) // 2
    left_half = nums[:mid]
    right_half = nums[mid:]

    left_half = merge_sort_descending(left_half)
    right_half = merge_sort_descending(right_half)

    return merge_descending(left_half, right_half)

def merge_descending(left, right):
    result = []
    left_index, right_index = 0, 0

    while left_index < len(left) and right_index < len(right):
        if left[left_index] >= right[right_index]:
            result.append(left[left_index])
            left_index += 1
        else:
            result.append(right[right_index])
            right_index += 1

    result += left[left_index:]
    result += right[right_index:]

    return result

def main():
    # Get input from the user
    input_str = input("Enter a list of numbers separated by spaces: ")
    nums = [int(x) for x in input_str.split()]

    # Call merge_sort_descending to sort the list
    sorted_nums = merge_sort_descending(nums)

    # Print the sorted list
    print("Sorted list in descending order:", sorted_nums)

if __name__ == "__main__":
    main()
