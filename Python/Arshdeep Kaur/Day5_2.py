#Write a Python program that prints all the prime numbers between two given numbers provided by the user.

num1 = int(input("Enter the lower range number: "))
num2 = int(input("Enter the upper range number: "))

#assuming that both the numbers are inclusive
print("The prime numbers between", num1, "and", num2, "are: ")

for i in range(num1, num2+1):
    if i > 1:
        for j in range(2, i):
            if (i % j == 0):
                break
        else:
            print(i)
