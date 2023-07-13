#Write a Python program that takes a list of integers as input from the user and creates two new lists: one containing the even numbers from the input list and another containing the odd numbers. The program should then write these two lists to separate files. The user should enter the filenames for the input and output files.

#Example:
#Input: Enter a list of integers (separated by spaces): 1 2 3 4 5 6

#Output files:
#even_numbers.txt:
#2
#4
#6

#odd_numbers.txt:
#1
#3
#5

def write_list_to_file(lst, filename):
    with open(filename, 'w') as file:
        for item in lst:
            file.write(str(item) + '\n')

# Main program
input_filename = input("Enter the filename for the input list: ")
output_even_filename = input("Enter the filename for the even numbers: ")
output_odd_filename = input("Enter the filename for the odd numbers: ")

input_list = []
while True:
    num = input("Enter an integer (or 'q' to quit): ")
    if num == 'q':
        break
    try:
        num = int(num)
        input_list.append(num)
    except ValueError:
        print("Invalid input. Please enter an integer or 'q' to quit.")

even_list = [num for num in input_list if num % 2 == 0]
odd_list = [num for num in input_list if num % 2 != 0]

write_list_to_file(even_list, output_even_filename)
write_list_to_file(odd_list, output_odd_filename)

print("Even numbers have been written to", output_even_filename)
print("Odd numbers have been written to", output_odd_filename)
