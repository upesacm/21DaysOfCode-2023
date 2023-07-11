#Q1 : Write a Python program that takes three numbers as input and prints the maximum of the three.
print("Welcome to the GREATEST NUMBER machine!!\nYou are allowed to enter three numbers & check the maximum of them.")
max=0   #the variable that will store the greatest value.
num1 =int(input(("Please enter the first number : ")))
num2 =int(input(("Please enter the second number : ")))
num3 =int(input(("Please enter the third number : ")))

if (num1 == num2 & num2 == num3) :
  print("{}, {} and {} are equal.".format(num1,num2,num3))
elif (num1>num2) :
  if (num1>num3) :
    max = num1
  else :
    max = num3
  print("{} is the greatest of {}, {} and {}.".format(max,num1,num2,num3))
else :
  if (num2>num3) :
    max = num2
  else :
    max = num3
  print("{} is the greatest of {}, {} and {}.".format(max,num1,num2,num3))
print("\nThank you!!\nKeep visiting us!!")




#Q2 : Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. 
#The program should then terminate and compute and print the sum of all the positive integers entered by the user.
print("Welcome to NUMBER GAME machine!!")
sum = 0
x = int(input("How many nmubers would you like to add?"))
while (x>0) :
  num = int(input("Please enter number : "))
  if (num>=0) :
    sum = sum + num
  else :
    break
  x = x-1
print("Sum of entered numbers  = {}".format(sum))
print("\nThank you!!\nKeep visiting us!!")


  
