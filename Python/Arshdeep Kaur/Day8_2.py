"""
Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects. The program should calculate and print
the average grade for each student. The average grade should be rounded to two decimal places.
Example -
Input: [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]
Output:
Alice: 81.67
Bob: 90.67
Charlie: 81.00
"""

list1 = []
n = int(input("Enter the number of students: "))
for i in range(n):
    name = input("Enter the name of the student: ")
    score1 = int(input("Enter the marks of the student in the first subject: "))
    score2 = int(input("Enter the marks of the student in the second subject: "))
    score3 = int(input("Enter the marks of the student in the third subject: "))
    tup = (name, score1, score2, score3)
    list1.append(tup)

for i in range(n):
    print(list1[i][0], end = ": ")
    avg = round( (list1[i][1] + list1[i][2] + list1[i][3])/3, 2 )
    print(avg)
