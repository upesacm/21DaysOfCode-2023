''' Write a Python program that reads a CSV file called "grades.csv" containing student names and their grades. Calculate the average grade and display it with a descriptive message.'''

#sol
import csv

total_grade=0
num_student=0

with open('grade.csv', 'r') as f:
    reader=csv.reader(f)
    next(reader)
    for row in reader:
        if len(row)==2:
            grade=float(row[1])
            total_grade+=grade
            num_student+=1

if num_student==0:
    print('No data found')
else:
    print(f'The average grade: {total_grade/num_student}')

'''Write a Python program that takes a list of integers as input from the user and creates two new lists:one containing the even numbers from the input list and another containing the odd numbers.
The program should then write these two lists to separate files. The user should enter the filenames for the input and output files.'''

#sol
n=input('Enter the list:')
n=n.split()
lst=[]
for n in n:
    a=int(n)
    lst.append(a)
length=len(lst)


for n in range(length):
    if lst[n]%2==0:
        with open("even_number.txt", 'a') as f:
            f.write(f'{lst[n]}\n')
    else:
        with open("odd_number.txt", 'a') as f:
            f.write(f'{lst[n]}\n')
