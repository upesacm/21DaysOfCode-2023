#calculator 
try:
    n1 = float(input("Enter the first number: "))
    operator = input("Enter an operator (+, -, *, /): ")
    n2 = float(input("Enter the second number: "))

    result = {
        '+': n1 + n2,
        '-': n1 - n2,
        '*': n1 * n2,
        '/': n1 / n2
    }.get(operator)

    if result is not None:
        print("Result:", result)
    else:
        print("Invalid operator!")
        
except ValueError:
    print("Invalid input. Please enter a valid number.")
    
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
