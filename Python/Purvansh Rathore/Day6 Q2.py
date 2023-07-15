#DAY 6 Question 2

def find_second_smallest(numbers):
    if len(numbers) < 2:
        return None
    smallest = min(numbers)
    second_smallest = float('inf')
    for number in numbers:
        if number > smallest and number < second_smallest:
            second_smallest = number
    return second_smallest

# Example usage with user input
user_input = input("Enter a list of integers (space-separated): ")
user_list = list(map(int, user_input.split()))

second_smallest_number = find_second_smallest(user_list)
if second_smallest_number is not None:
    message = f"The second smallest number in the list is: {second_smallest_number}"
else:
    message = "There is no second smallest number in the list."

print(message)
