#2. Write a Python program that simulates a simple calculator. It should ask the user 
#to enter two numbers and an operator (+, -, *, /). Perform the corresponding operation 
#on the numbers and display the result.

n1 = 3
n2 = 6

operator=input("Enter the operator: ")

if(operator=="+"):
   n3= n1+n2

elif(operator=="-"):
   n3= n1-n2

elif(operator=="*"):
   n3= n1*n2

elif(operator=="/"):
   n3= n1/n2

print("The result: "+ str(n3))