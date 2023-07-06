x = float(input("Enter a number: "))
y = float(input("Enter a number: "))

op = input("Enter the operation(+,-,/,*): ")

if op == '+':
    result = x + y
elif op == '-':
    result = x - y
elif op == '*':
    result = x * y
elif op == '/':
    result = x / y
else:
    print("Invalid operation")

print(f"Output: {result}")
