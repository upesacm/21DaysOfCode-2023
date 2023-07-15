try:
    dividend = int(input("Enter the dividend: "))
    divisor = int(input("Enter the divisor: "))

    result = dividend / divisor
    print(f"The result of the division is: {result}")

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
except ValueError:
    print("Error: Invalid input. Please enter integers only.")
