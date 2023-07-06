#Write a Python program that simulates a simple calculator. It should ask the user to enter two numbers and an operator (+, -, *, /). Perform the corresponding operation on the numbers and display the result.
# Prompt the user to enter two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Prompt the user to enter an operator
operator = input("Enter an operator (+, -, *, /): ")

# Perform the corresponding operation
if operator == '+':
    result = num1 + num2
elif operator == '-':
    result = num1 - num2
elif operator == '*':
    result = num1 * num2
elif operator == '/':
    result = num1 / num2
else:
    print("Invalid operator!")
    exit(1)

# Display the result
print("Result: ", result)
