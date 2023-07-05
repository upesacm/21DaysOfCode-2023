# Write a Python program that takes three numbers as input and prints the maximum of the three.

#sol
l=[]
for i in range(0,3):
    a=int(input('Enter number:'))
    l.append(a)
max_num=max(l)
print(f'The maximum number from {l} is {max_num}')

#Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. The program should then terminate and compute and print the sum of all the positive integers entered by the user.

#sol
l=[]
b=True
sum=0
while(b==True):
    a=int(input('Enter number:'))
    if a<0:
        b=False
    else:
        l.append(a)
        sum+=a
print(f'The sum of {l} positive number is {sum}')
