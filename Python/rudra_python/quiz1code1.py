def sort_and_remove_duplicates(numbers):
    try:
        # Convert the input string of numbers into a list of integers
        numbers = [int(num) for num in numbers.split()]

        # Remove duplicates by converting the list to a set and then back to a list
        unique_numbers = list(set(numbers))

        # Sort the list in ascending order
        sorted_unique_numbers = sorted(unique_numbers)

        return sorted_unique_numbers

    except ValueError:
        print("Invalid input. Please enter integers only.")
        return []

input_numbers = input()
sorted_unique_numbers = sort_and_remove_duplicates(input_numbers)
print("The Sorted Non-Duplicate List:", sorted_unique_numbers)
