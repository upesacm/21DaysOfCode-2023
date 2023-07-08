def find_second_smallest():
    input_string = input("Enter numbers separated by spaces: ")
    numbers = input_string.split()
    numbers = [int(num) for num in numbers]
    smallest = float('inf')
    second_smallest = float('inf')
    for number in numbers:
        if number < smallest:
            second_smallest = smallest
            smallest = number
        elif number < second_smallest and number != smallest:
            second_smallest = number
    print(second_smallest,"is the second smallest number")
find_second_smallest()
