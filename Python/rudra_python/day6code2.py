def find_second_smallest(numbers):
    if len(numbers) < 2:
        return None

    smallest = min(numbers)
    second_smallest = float('inf')

    for num in numbers:
        if num > smallest and num < second_smallest:
            second_smallest = num

    return second_smallest
numbers = [9, 4, 5, 1, 2, 7, 3]
second_smallest = find_second_smallest(numbers)
print("The second smallest number is:", second_smallest)


