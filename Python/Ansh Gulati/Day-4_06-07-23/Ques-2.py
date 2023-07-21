''' Ques- Write a Python program that simulates a simple calculator. 
It should ask the user to enter two numbers and an operator (+, -, *, /). 
Perform the corresponding operation on the numbers and display the result. '''

print("\n ************** Simple Calculator ************** \n")
num1=int(input("Enter the First Number: "))
num2=int(input("Enter the Second Number: "))
operator=str(input("Enter the Operation you would like to perform (+, -, *, /) : "))

if(operator == '+'):
    print("{} + {} = {}".format(num1,num2,(num1+num2)))

elif(operator == '-'):
    print("{} - {} = {}".format(num1,num2,(num1-num2)))

elif(operator == '*'):
    print("{} * {} = {}".format(num1,num2,(num1*num2)))

elif(operator == '/'):
    print("{} / {} = {}".format(num1,num2,(num1/num2)))

else:
    print('Invalid Operator')
