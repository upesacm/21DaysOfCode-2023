def separate_numbers(input_list, even_filename, odd_filename):
    even_numbers = [num for num in input_list if num % 2 == 0]
    odd_numbers = [num for num in input_list if num % 2 != 0]

    with open(even_filename, 'w') as even_file:
        for num in even_numbers:
            even_file.write(f"{num}\n")

    with open(odd_filename, 'w') as odd_file:
        for num in odd_numbers:
            odd_file.write(f"{num}\n")

input_list = input("Enter a list of integers (separated by spaces): ").split()
input_list = [int(num) for num in input_list]

even_filename = input("Enter the filename for even numbers: ")
odd_filename = input("Enter the filename for odd numbers: ")

separate_numbers(input_list, even_filename, odd_filename)

print("Output files:")
print(f"{even_filename}:")
with open(even_filename, 'r') as even_file:
    print(even_file.read())

print(f"\n{odd_filename}:")
with open(odd_filename, 'r') as odd_file:
    print(odd_file.read())

