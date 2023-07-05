def maxNum(numbers):

    return max(numbers)

numbers = []

for i in range(3):
    n = int(input("Enter a number\n"))
    numbers.append(n)

print("The maximum of 3 numbers is %d"%maxNum(numbers))