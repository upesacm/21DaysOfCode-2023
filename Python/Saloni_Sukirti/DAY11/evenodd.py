
# 2. Write a Python program that takes a list of integers as input from the user and creates two new lists: one containing the even
# numbers from the input list and another containing the odd numbers. The program should then write these two lists to separate files.
# The user should enter the filenames for the input and output files.

def create_even_odd_lists(numbers):
    even_numbers = []
    odd_numbers = []

    for num in numbers:
        if num % 2 == 0:
            even_numbers.append(num)
        else:
            odd_numbers.append(num)

    return even_numbers, odd_numbers


def write_list_to_file(numbers, filename):
    with open(filename, 'w') as file:
        for num in numbers:
            file.write(str(num) + '\n')


# Input list from user
numbers = input("Enter a list of integers (space-separated): ").split()
numbers = [int(num) for num in numbers]

# Creating even and odd lists
even_numbers, odd_numbers = create_even_odd_lists(numbers)

# Filenames for output files
even_filename = input("Enter a filename for even numbers: ")
odd_filename = input("Enter a filename for odd numbers: ")

# Writing even and odd lists to files
write_list_to_file(even_numbers, even_filename)
write_list_to_file(odd_numbers, odd_filename)

print("Files created successfully!")
