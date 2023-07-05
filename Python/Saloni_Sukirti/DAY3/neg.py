# 2. Write a Python program that prompts the user to enter a series of integers,
# one at a time, until they enter a negative number. 
# The program should then terminate and compute and print the 
#sum of all the positive integers entered by the user.

a = True
m = []
sum = 0

while(a):
    k = int(input("Enter the number: "))
    if k < 0:
        break
    m.append(k)
    sum = sum + k

print(sum)