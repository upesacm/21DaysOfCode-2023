try:
    dividend = int(input())
    divisor = int(input())
    result = dividend / divisor
    print(result)
except ZeroDivisionError:
    print("Error: Division by zero")
