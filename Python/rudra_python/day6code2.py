def find_second_smallest(numbers):
    if len(numbers) < 2:
        return None

    smallest = min(numbers)
    second_smallest = float('inf')

    for num in numbers:
        if num > smallest and num < second_smallest:
            second_smallest = num

    return second_smallest

