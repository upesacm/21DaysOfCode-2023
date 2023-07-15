# Write a Python program that prints all the prime numbers between two given numbers provided by the user.

m=int(input("Enter starting point : "))
n=int(input("Enter ending point : "))

for i in range(m,n+1):
    for j in range(2,i//2):
        if i%j==0:
            break
    else:
        print(i,end=' ')