#Write a Python program that takes a list of integers as input from the user and creates two new lists: one containing the even numbers from the input list and another containing the odd numbers. The program should then write these two lists to separate files. The user should enter the filenames for the input and output files.
def get_input_list():
    input_list = input("Enter a list of integers (separated by spaces): ").split()
    input_list = [int(num) for num in input_list]
    return input_list

def separate_even_odd_numbers(input_list):
    even_numbers = [num for num in input_list if num % 2 == 0]
    odd_numbers = [num for num in input_list if num % 2 != 0]
    return even_numbers, odd_numbers

def write_list_to_file(numbers, filename):
    with open(filename, 'w') as file:
        for num in numbers:
            file.write(str(num) + '\n')

input_list = get_input_list()
even_numbers, odd_numbers = separate_even_odd_numbers(input_list)

even_filename = input("Enter the filename for even numbers: ")
write_list_to_file(even_numbers, even_filename)
print(f"Even numbers have been written to '{even_filename}'")

odd_filename = input("Enter the filename for odd numbers: ")
write_list_to_file(odd_numbers, odd_filename)
print(f"Odd numbers have been written to '{odd_filename}'")
