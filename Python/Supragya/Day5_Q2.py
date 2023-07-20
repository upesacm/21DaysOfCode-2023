# Q2  Write a Python program that prints all the prime numbers between two given numbers provided by the user
def is_prime(n):
    if(n<2):
        return False
    for i in range(2,int(n/2)):
        if(n%i==0):
            return False
    return True

start = int(input("Enter the starting range "))
end = int(input("Enter the ending range "))
print("Prime numbers between ",start," and ",end," are :",end=" ")
for i in range(start,end+1):
    if(is_prime(i)):
        print(i,end=" ")
