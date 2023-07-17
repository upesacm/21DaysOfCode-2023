# Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message.

def find_second_smallest(numbers):
    if len(numbers) < 2:
        return None  # Return None if the list has less than two elements

    smallest = float('inf')  # Initialize with a very large value
    second_smallest = float('inf')  # Initialize with a very large value

    for number in numbers:
        if number < smallest:
            second_smallest = smallest
            smallest = number
        elif number < second_smallest and number != smallest:
            second_smallest = number

    return second_smallest

# Example usage:
numbers_list = [10, 5, 20, 15, 8]
second_smallest = find_second_smallest(numbers_list)

if second_smallest is not None:
    print("The second smallest element in the list is:", second_smallest)
else:
    print("The list does not have a second smallest element.")
