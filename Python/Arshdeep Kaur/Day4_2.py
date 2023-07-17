num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
operator = input("Enter the operation to be performed (+, -, *, /): ")

if (operator == "+"):
    print("The sum of", num1, "and", num2, "is:", num1+num2)
    
elif (operator == "-"):
    print("The difference of", num1, "and", num2, "is:", num1-num2)

elif (operator == "*"):
    print("The product of", num1, "and", num2, "is:", num1*num2)

elif (operator == "/"):
    print("The quotient of", num1, "divided by", num2, "is:", num1/num2)

else:
    print("Wrong operator entered")
