# Write a function that accepts a list of integers and returns the largest number from the list.

#sol
try:
    n=int(input('Enter number of element you want to input in list:'))
    list=[]
    for i in range(0, n):
        a=int(input('Enter number:'))
        list.append(a)
    print(f'The maximum number of list {list} is {max(list)}')
except ValueError:
    print('Enter valid input')

#Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message.

#sol
try:
    n=int(input('Enter number of element you want to input in list:'))
    list=[]
    for i in range(0, n):
        a=int(input('Enter number:'))
        list.append(a)
    b=min(list)
    list.remove(b)
    print(f'The second minimum number of list {list} is {min(list)}')
except ValueError:
    print('Enter valid input')
