#1. Write a Python program that prompts the user to enter a temperature in Celsius and converts it to Fahrenheit using the formula: Fahrenheit = (Celsius * 9/5) + 32.

# Prompt the user to enter a temperature in Celsius
celsius = float(input("Enter a temperature in Celsius: "))

# Convert Celsius to Fahrenheit using the formula
fahrenheit = (celsius * 9/5) + 32

# Display the result
print(celsius, "Celsius is", fahrenheit, "Fahrenheit")



#2. Write a Python program that simulates a simple calculator. It should ask the user to enter two numbers and an operator (+, -, *, /). Perform the corresponding operation on the numbers and display the result.

# Ask the user to enter two numbers and an operator
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
operator = input("Enter an operator (+, -, *, /): ")

# Perform the corresponding operation on the numbers and display the result
if operator == "+":
  result = num1 + num2
elif operator == "-":
  result = num1 - num2
elif operator == "*":
  result = num1 * num2
elif operator == "/":
  result = num1 / num2
else:
  result = "Invalid operator"

print(num1, operator, num2, "=", result)