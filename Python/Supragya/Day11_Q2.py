# Q2 Write a Python program that takes a list of integers as input from the user and creates two new lists: 
# one containing the even numbers from the input list and another containing the odd numbers. 
# The program should then write these two lists to separate files. The user should enter the filenames for 
# the input and output files.
def separate_numbers(input_list):
    even_numbers = []
    odd_numbers = []

    for num in input_list:
        if num % 2 == 0:
            even_numbers.append(num)
        else:
            odd_numbers.append(num)

    return even_numbers, odd_numbers

def write_in_file(filename, number_list):
    with open(filename, 'w') as file:
        for num in number_list:
            file.write(str(num) + '\n')

input_list = input("Enter a list of integers (separated by spaces): ").split()
input_list = [int(num) for num in input_list]

even_numbers, odd_numbers = separate_numbers(input_list)

even_filename = input("Enter a filename for even numbers: ")
odd_filename = input("Enter a filename for odd numbers: ")
write_in_file(even_filename, even_numbers)
write_in_file(odd_filename, odd_numbers)

print("Files created successfully.")
