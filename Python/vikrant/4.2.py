a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
operation = input("Choose an operator(+,-,*,/): ")

if operation == '+':
    print(a+b)
elif operation == '-':
    print(a-b)
elif operation == '*':
    print(a*b)
elif operation == '/':
    print(a/b)
else:
    print("error")