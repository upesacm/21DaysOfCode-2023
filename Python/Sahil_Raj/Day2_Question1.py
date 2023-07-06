#1. Write a Python program that takes an integer as input and determines whether it is even or odd.
def check_even_odd(num):
    if num % 2 == 0:
        return "Even"
    else:
        return "Odd"

# Take input from the user
num = int(input("Enter an integer: "))

# Call the function to check even or odd
result = check_even_odd(num)

# Print the result
print(f"The number {num} is {result}.")
