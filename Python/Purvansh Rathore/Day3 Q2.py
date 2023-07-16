#DAY 3 Question 2

sum = 0

while True:
    n = int(input("Enter an integer (enter a negative number to exit): "))
    
    if n < 0:
        break

    sum += n

# Print
print("The sum of positive integers is:", sum)

