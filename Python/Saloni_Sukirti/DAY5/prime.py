#2. Write a Python program that prints all the prime numbers between two given numbers
#provided by the user.

def prime(n):

    for i in range(2,n):
        if n % i == 0:
            return

    print("Prime number- ",n)


num1 = int(input("Enter the 1st number: "))
num2 = int(input("Enter the 2nd number: "))

for i in range(num1,num2):
    prime(i)
