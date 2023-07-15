def evenodd():
    input_file = input("Enter filename for input file: ")
    output_even_file = input("Enter filename for even numbers: ")
    output_odd_file = input("Enter filename for odd numbers: ")

    numbers = input("Enter a list of integers, separated by spaces: ").split()
    numbers = [int(num) for num in numbers]
    even_numbers = []
    odd_numbers = []
    for num in numbers:
        if num % 2 == 0:
            even_numbers.append(num)
        else:
            odd_numbers.append(num)

    with open(output_even_file, 'w') as file:
        for num in even_numbers:
            file.write(str(num) + '\n')

    with open(output_odd_file, 'w') as file:
        for num in odd_numbers:
            file.write(str(num) + '\n')

    print("Even numbers written to", output_even_file)
    print("Odd numbers written to", output_odd_file)



evenodd()
