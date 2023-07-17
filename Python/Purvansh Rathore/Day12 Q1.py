try:
    dividend = int(input("Enter the dividend: "))
    divisor = int(input("Enter the divisor: "))

    result = dividend / divisor
    print("Result:", result)

except ZeroDivisionError:
    print("Error: Division by zero is not allowed. Please enter a non-zero divisor.")

except ValueError:
    print("Error: Invalid input. Please enter valid integers.")

