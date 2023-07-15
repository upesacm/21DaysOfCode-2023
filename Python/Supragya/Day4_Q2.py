# Q1 Write a Python program that simulates a simple calculator. It should ask the user to enter two numbers 
# and an operator (+, -, *, /). Perform the corresponding operation on the numbers and display the result.
a = float(input("Enter the value of a "))
b = float(input("Enter the value of b "))
operator = (input("Enter the operator from (+, -, *, /) "))
result=0
if(operator=="+"):
    result=a+b
elif(operator=="-"):
    result=a-b
elif(operator=="/"):
    if(b==0):
        print("Division by zero is not allowed")
    else:
        result=a/b
elif(operator=="*"):
    result=a*b
print("Result = ",result)
