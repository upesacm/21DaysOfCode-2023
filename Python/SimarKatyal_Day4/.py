#Q1 : Write a Python program that prompts the user to enter a temperature in Celsius and converts it to Fahrenheit using the formula: 
#Fahrenheit = (Celsius * 9/5) + 32.
print("TEMPERATURE machine welcomes you!!!")
temp_C = float(input("Please enter the temperature in Celsius : "))
temp_F = (temp_C * 9/5) + 32
print("{} degrees Celsius is {} Fahrenheit.".format(temp_C,temp_F))
print("Thank you!!\nHave a nice day\n")



#Q2 : Write a Python program that simulates a simple calculator. It should ask the user to enter two numbers and an operator (+, -, *, /).
#Perform the corresponding operation on the numbers and display the result.
print("Welcome to the CALCULATOR!!")
print("Here you can perform operations with 2 numbers only.\n")
num1 = float(input("Please enter the first number. : "))
num2 = float(input("Please enter the second number. :"))

try :
  op = int(input("Select the operation you want to perform :\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Quotient\n5.Remainder\n"))
except :
  print("Please enter a valid choice.")
else :
      if (op==1):
        print("Result of {} & {} after applying the operation + : {}".format(num1, num2, num1 + num2))
      elif (op==2):
        print("Result of {} & {} after applying the operation - : {}".format(num1, num2, num1 - num2))
      elif (op==3) :
        print("Result of {} & {} after applying the operation * : {}".format(num1, num2, num1 * num2))
      elif (op==4) :
        print("Result of {} & {} after applying the operation / : {}".format(num1, num2, num1 / num2))
      else :
        print("Result of {} & {} after applying the operation % : {}".format(num1, num2, num1 % num2))

print("Thank you!!\nHave a nice day!!\n")

