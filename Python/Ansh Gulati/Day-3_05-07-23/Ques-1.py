# Ques- Write a Python program that takes three numbers as input and prints the maximum of the three.

num1=int(input("Enter the value of first number: "))
num2=int(input("Enter the value of second number: "))
num3=int(input("Enter the value of third number: "))

if(num1>num2):
    if (num1 > num3) :
        print("The Maximum of three numbers is: ",num1)
    else:
        print("The Maximum of three numbers is: ",num3)
else:
    if (num2 > num3) :
        print("The Maximum of three numbers is: ",num2)
    else:
        print("The Maximum of three numbers is: ",num3)
