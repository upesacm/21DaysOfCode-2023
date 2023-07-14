def divide_numbers(a, b):
    try:
        result = a / b
        return result
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
        return None

num1 = float(input("Enter the numerator: "))
num2 = float(input("Enter the denominator: "))

result = divide_numbers(num1, num2)
if result is not None:
    print("Result:", result)

