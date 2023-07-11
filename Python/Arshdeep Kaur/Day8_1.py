'''
Write a Python program that takes a list of tuples containing student names and their corresponding marks. Unpack the tuples and display each student's name with their marks.
Example -
Input: students = [('Alice', 80), ('Bob', 90), ('Charlie', 75)]
Output: Alice: 80
Bob: 90
Charlie: 75.
'''

list1 = []
n = int(input("Enter the number of students: "))
for i in range(n):
    name1 = input("Enter the name of the student: ")
    score = int(input("Enter the marks of the student: "))
    tup = (name1, score)
    list1.append(tup)

for i in range(n):
    print(list1[i][0], end = ": ")
    print(list1[i][1])
