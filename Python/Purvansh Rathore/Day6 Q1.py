#DAY 6 Question 1

def find_largest_number(numbers):
    if not numbers:
        return None
    largest = numbers[0]
    for number in numbers:
        if number > largest:
            largest = number
    return largest

# Example usage with user input
user_input = input("Enter a list of integers (space-separated): ")
user_list = list(map(int, user_input.split()))

largest_number = find_largest_number(user_list)
print("The largest number in the list is:", largest_number)
