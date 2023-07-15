#Write a Python program that prints all the prime numbers between two given numbers provided by the user.
def prime(n):
    if n==1:
        return False
    elif n==2:
        return True
    else:
        for i in range(2,n):
            if n%i==0:
                return False
        return True
a=int(input("Enter the first number: "))
b=int(input("Enter the second number: "))
for i in range(a,b):
    if prime(i):
        print(i)
