# 1. Write a Python program that handles a division by zero error using a try-except block.
# Display a user-friendly error message.

try:
    num1 = int(input("Enter the 1st number: "))
    num2 = int(input("Enter the 2nd number: "))
    num3 = num1/num2
    print(num3)
except Exception:
    print("Sorry try again division by zero error occured")