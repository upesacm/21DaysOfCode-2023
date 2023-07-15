# Q1  Write a Python program that handles a division by zero error using a try-except block. 
# Display a user-friendly error message.
num = int(input("Enter the numerator "))
den = int(input("Enter the denominator "))
try :
    result =num/den
    result = round(result,2)
    print("Result = ",result)
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
except ValueError:
    print("Error: Please enter valid integer values.")
