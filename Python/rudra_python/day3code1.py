# Write a Python program that takes three numbers as input and prints the maximum of the three
def find_max(a, b, c):
    return max(a, b, c)

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
num3 = float(input("Enter the third number: "))

maximum = find_max(num1, num2, num3)
print("The maximum of the three numbers is:", maximum)
