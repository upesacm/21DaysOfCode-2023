def find_largest(numbers):
    if not numbers:
        return None

    largest = numbers[0]
    for num in numbers:
        if num > largest:
            largest = num

    return largest

numbers = [9, 4, 5, 1, 2, 7, 3]
largest_num = find_largest(numbers)
print("The largest number is:", largest_num)


