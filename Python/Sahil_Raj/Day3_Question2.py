#Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. The program should then terminate and compute and print the sum of all the positive integers entered by the user.
# Initializing variables
sum_positive = 0

# Prompting the user for input
while True:
    num = int(input("Enter an integer (enter a negative number to exit): "))
    
    if num < 0:
        break
    
    sum_positive += num

# Printing the sum of positive integers
print("The sum of positive integers entered is:", sum_positive)
