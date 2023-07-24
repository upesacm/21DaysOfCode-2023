#q1
def bubble_sort(nums):
    n = len(nums)
    for i in range(n):
        # Flag to check if any swaps occurred during the pass
        swapped = False
        for j in range(0, n-i-1):
            # Compare adjacent elements and swap if necessary
            if nums[j] > nums[j+1]:
                nums[j], nums[j+1] = nums[j+1], nums[j]
                swapped = True
        # If no swaps occurred, the list is already sorted
        if not swapped:
            break
    return nums

def main():
    # Get input from the user
    input_str = input("Enter a list of numbers separated by spaces: ")
    nums = [int(x) for x in input_str.split()]

    # Call bubble_sort to sort the list
    sorted_nums = bubble_sort(nums)

    # Print the sorted list
    print("Sorted list in ascending order:", sorted_nums)

if __name__ == "__main__":
    main()
