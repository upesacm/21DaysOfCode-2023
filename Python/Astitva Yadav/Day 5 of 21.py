#1. Write a Python program that takes a student's score as input and determines whether the student has passed or failed. Assume that the passing score is 60 or greater.
# Get the student's score as input
score = int(input("Enter your score: "))

# Check if the score is 60 or greater
if score >= 60:
    # Print "Passed" if the condition is true
    print("Passed")
else:
    # Print "Failed" if the condition is false
    print("Failed")



#2. Write a Python program that prints all the prime numbers between two given numbers provided by the user.
# Define a function to check if a number is prime
def is_prime(n):
    # If n is less than 2, it is not prime
    if n < 2:
        return False
    # Loop from 2 to the square root of n
    for i in range(2, int(n**0.5) + 1):
        # If n is divisible by i, it is not prime
        if n % i == 0:
            return False
    # If none of the above, it is prime
    return True

# Get the lower and upper bounds as input
lower = int(input("Enter the lower bound: "))
upper = int(input("Enter the upper bound: "))

# Loop from lower to upper
for num in range(lower, upper + 1):
    # If num is prime, print it
    if is_prime(num):
        print(num)