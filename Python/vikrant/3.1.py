a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))

if a>>b & b>>c:
    print("The greatest of three is: ", a)
elif a<<b & b>>c:
    print("The greatest of three is: ", b)
else:
    print("The greatest of three is: ", c)

