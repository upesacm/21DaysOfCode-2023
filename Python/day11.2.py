'''2. Write a Python program that takes a list of integers as input from the user and creates two new lists: one containing the even numbers from the input list and another containing the odd numbers. The program should then write these two lists to separate files. The user should enter the filenames for the input and output files.

Example:
Input: Enter a list of integers (separated by spaces): 1 2 3 4 5 6

Output files:
even_numbers.txt:
2
4
6

odd_numbers.txt:
1
3
5
'''
def write_numbers_to_file(numbers, file_name):
    with open(file_name, 'w') as file:
        for number in numbers:
            file.write(str(number) + '\n')

def main():
    input_numbers = input("Enter a list of integers (separated by spaces): ")
    numbers_list = input_numbers.split()

    numbers = [int(number) for number in numbers_list]

    even_numbers = [number for number in numbers if number % 2 == 0]
    odd_numbers = [number for number in numbers if number % 2 != 0]

    even_filename = input("Enter the filename for even numbers: ")
    odd_filename = input("Enter the filename for odd numbers: ")

    write_numbers_to_file(even_numbers, even_filename)
    write_numbers_to_file(odd_numbers, odd_filename)

    print("Output files created successfully.")

if __name__ == '__main__':
    main()
