#Write a Python program that takes an integer as input and determines whether it is even or odd.
while True:
    try:
        n = int(input("Enter your number: "))

        if n % 2 == 0:
            print("Even")
        else:
            print("Odd")

        break

    except ValueError:
        print("Invalid input. Please enter an integer.")

