
#1. Write a Python program that takes three numbers as input and prints the maximum of the three.

 # Get the input numbers from the user
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))

# Find the maximum of the three numbers using max function
maximum = max(num1, num2, num3)

# Print the maximum
print("The maximum of the three numbers is", maximum)



#2. Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. The program should then terminate and compute and print the sum of all the positive integers entered by the user.

# Initialize the sum to zero
sum = 0

# Loop until the user enters a negative number
while True:
    # Prompt the user to enter an integer
    num = int(input("Enter an integer: "))

    # If the number is negative, break the loop
    if num < 0:
        break

    # Otherwise, add the number to the sum
    sum += num

# Print the sum of the positive integers
print("The sum of the positive integers is", sum)
