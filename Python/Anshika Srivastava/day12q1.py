'''Write a Python program that handles a division by zero error using a try-except block. 
Display a user-friendly error message. '''

n=int(input("Enter number of test cases- "))
for i in range(0,n):
    a,b=input("Enter numbers to divide- ").split()
    try:
        a=int(a)
        b=int(b)
        print (a/b)
    except ZeroDivisionError:
        print("Error Code:Integer division or modulo by zero")
