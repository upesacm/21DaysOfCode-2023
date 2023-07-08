#1. Write a Python program that prompts the user to enter a temperature in Celsius
# and converts it to Fahrenheit using the formula: Fahrenheit = (Celsius * 9/5) + 32.
#2. Write a Python program that simulates a simple calculator. It should ask the user 
#to enter two numbers and an operator (+, -, *, /). Perform the corresponding operation 
#on the numbers and display the result.

celsius=int(input("Enter the Celsius: "))
fahrenheit=(celsius * 9/5) + 32
print("Fahrenheit "+str(fahrenheit))
