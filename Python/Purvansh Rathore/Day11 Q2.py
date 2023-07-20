def write_list_to_file(filename, numbers):
    with open(filename, 'w') as file:
        for number in numbers:
            file.write(str(number) + '\n')

# Input list of integers from the user
input_list = input("Enter a list of integers (separated by spaces): ").split()

# Convert the input list to integers
input_list = [int(number) for number in input_list]

# Separate even and odd numbers
even_numbers = [number for number in input_list if number % 2 == 0]
odd_numbers = [number for number in input_list if number % 2 != 0]

# Input and output file names from the user
input_filename = input("Enter the filename for the input: ")
even_output_filename = input("Enter the filename for the even numbers: ")
odd_output_filename = input("Enter the filename for the odd numbers: ")

# Write even numbers to a file
write_list_to_file(even_output_filename, even_numbers)
print(f"Even numbers have been written to '{even_output_filename}'.")

# Write odd numbers to a file
write_list_to_file(odd_output_filename, odd_numbers)
print(f"Odd numbers have been written to '{odd_output_filename}'.")
