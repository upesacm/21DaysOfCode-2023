# Questions for Day - 03 (05-07-2023)

# 1. Write a Python program that takes three numbers as input 
#and prints the maximum of the three.

a = 0
for i in range(3):
    num = int(input("Enter the number "+str(i+1)+": "))
    if num > a:
        a = num

print("The maximum of the three: "+ str(a))


