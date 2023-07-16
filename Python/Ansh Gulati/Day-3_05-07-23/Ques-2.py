''' Ques- Write a Python program that prompts the user to enter a 
series of integers, one at a time, until they enter a negative number.
The program should then terminate and compute and print the sum of all 
the positive integers entered by the user.'''

sum=0
number=0
while(number>=0):
    number=int(input("Enter a Positive Number: "))
    if(number>=0):
        sum=sum+number
    else:
        break

print(sum)
