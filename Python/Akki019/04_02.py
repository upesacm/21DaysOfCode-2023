# Write a Python program that simulates a simple calculator. It should ask the user to enter two numbers and an operator (+, -, *, /). 
# Perform the corresponding operation on the numbers and display the result.

num1=float(input("Enter first number : "))
num2=float(input("Enter second number : "))
op=input("Enter operator sign +-*- : ")
if op=='+':
    print(num1+num2)
elif op=='-':
    print(num1-num2)
elif op=='*':
    print(num1*num2)
elif op=='/':
    print(num1/num2)
else:
    print("Wrong Operator chosen")