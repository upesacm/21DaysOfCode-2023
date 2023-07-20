def largest_product(numbers):
    # Check if there are at least two numbers in the list
    if len(numbers) < 2:
        return -1

    # Initialize the maximum and second maximum values
    max1 = max2 = float('-inf')

    # Loop through the list and update the maximum and second maximum values
    for num in numbers:
        if num > max1:
            max2 = max1
            max1 = num
        elif num > max2:
            max2 = num

    # Calculate the product of the two largest numbers
    product = max1 * max2

    return product


# Get input from the user
input_str = input()
try:
    numbers = list(map(int, input_str.split()))
    result = largest_product(numbers)
    print("Product Of Largest Distinct Numbers:", result)
except ValueError:
    print("Invalid input. Please enter a list of integers.")
