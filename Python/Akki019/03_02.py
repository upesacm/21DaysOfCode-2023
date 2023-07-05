# Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. 
#The program should then terminate and compute and print the sum of all the positive integers entered by the user.

l=[]
i=0
while i>=0:
    l.append(i)
    i=int(input("Enter num : "))
    
print(f'Sum is {sum(l)}')