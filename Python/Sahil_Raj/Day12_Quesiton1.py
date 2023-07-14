#Write a Python program that handles a division by zero error using a try-except block. Display a user-friendly error message.

def divide_numbers(dividend, divisor):
    try:
        result = dividend / divisor
        return result
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
        return None

# Example usage
dividend = 10
divisor = 0

result = divide_numbers(dividend, divisor)

if result is not None:
    print(f"The result of {dividend} divided by {divisor} is: {result}")
