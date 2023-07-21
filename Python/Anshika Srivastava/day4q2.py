a=float(input("Enter first number\n"))
b=float(input("Enter second number\n"))
print("+ for Addition \n - for Subtraction \n * for Multiplication \n / for Division")
op = input("Enter a character: ")[0]
if(op=='+'):
    print("Sum is",a+b)
elif(op=='-'):
    print("Difference is",a-b)
elif(op=='*'):
    print("Multiplcation is",a*b)
elif(op=='/'):
    print("Division is",a/b)
else:
    print("Invalid choice")
