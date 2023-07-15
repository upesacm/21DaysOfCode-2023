first_number = int(input("Enter the first number: "))
second_number = int(input("Enter the second number: "))

for i in range(first_number, second_number + 1):
    is_prime = True
    for number in range(2, i ):
        if i % number == 0:
            is_prime = False
            break

    if is_prime:
        print(i)