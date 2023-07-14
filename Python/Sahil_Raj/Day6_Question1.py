# 1. Write a function that accepts a list of integers and returns the largest number from the list.
def find_largest_number(numbers):
    if not numbers:
        return None  # Return None if the list is empty

    largest_number = numbers[0]  # Assume the first number is the largest

    for number in numbers:
        if number > largest_number:
            largest_number = number

    return largest_number
