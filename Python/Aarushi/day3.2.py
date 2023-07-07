#2. Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. The program should then terminate and compute and print the sum of all the positive integers entered by the user.
sum_positive = 0

while True:
    num = int(input("Enter an integer (enter a negative number to exit): "))
    
    if num < 0:
        break
    
    sum_positive += num

print("Sum of positive integers entered:", sum_positive)


