def addition(a,b):
    return a+b
def subtraction(a,b):
    return a-b
def divide(a,b):
    return a/b
def multiply(a,b):
    return a*b

a=int(input ("Enter your first number:"))
b=int(input("Enter your second number:"))
c=input("Enter your operator:")

if  c == '+':
    print(a,"+",b,"=",addition(a,b) )
elif c == '-':
    print(a,"-",b,"=",subtraction(a,b))
elif c == '*':
    print(a,"*",b,"=",multiply(a,b))
elif c == '/':
    print(a,"/",b,"=",divide(a,b))