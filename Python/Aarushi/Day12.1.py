#1. Write a Python program that handles a division by zero error using a try-except block. Display a user-friendly error message.

def divide_numbers(a, b):
    try:
        result = a / b
        return result
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
        return None
try:
    dividend = float(input("Enter the dividend: "))
    divisor = float(input("Enter the divisor: "))

    result = divide_numbers(dividend, divisor)

    if result is not None:
        print("Result of division:", result)

except ValueError:
    print("Error: Invalid input. Please enter valid numeric values.")

