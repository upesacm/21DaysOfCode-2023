#Write a Python program that handles a division by zero error using a try-except block. Display a user-friendly error message.

a = int(input("Enter the value of dividend: "))
b = int(input("Enter the value of divisor: "))

try:
    print("Quotient:", a/b)
    
except ZeroDivisionError:
    print("Error! Cannot Divide by Zero")
