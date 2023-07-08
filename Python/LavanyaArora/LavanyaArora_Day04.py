# Write a Python program that simulates a simple calculator. It should ask the user to enter two numbers and an operator (+, -, *, /). Perform the corresponding operation on the numbers and display the result.
num1 = int(input("Enter a number: "))
num2 = int(input("Enter another number: "))
operator = input("Enter an operator: ")
if operator == "+":
    print(num1 + num2)
elif operator == "-":
    print(num1 - num2)
elif operator == "*":
    print(num1 * num2)
elif operator == "/":
    print(num1 / num2)
else:
    print("Invalid operator")
