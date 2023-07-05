# Q2 Write a Python program that prompts the user to enter a series of integers, one at a time, 
# until they enter a negative number. The program should then terminate and compute and print the 
# sum of all the positive integers entered by the user.
sum=0
while(1):
    a= int(input("Enter the integer "))
    if(a<0):
        break
    else:
        sum+=a
print("Total sum of positive integers = ",sum)
