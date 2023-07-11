#Q2 Write a Python program that takes a list of tuples, where each tuple represents a student's name and 
# their corresponding grades in three subjects. The program should calculate and print the average grade for
#  each student. The average grade should be rounded to two decimal places.
num = int(input("Enter the number of students: "))
students = []
for i in range(num):
    name = input("Enter student name: ")
    marks1 = float(input("Enter marks of subject 1: "))
    marks2 = float(input("Enter marks of subject 2: "))
    marks3 = float(input("Enter marks of subject 3: "))
    average = (marks1+marks2+marks3)/3
    average =round(average, 2)
    tuple = (name, average)
    students.append(tuple)
for student, average in students:
    print(f"Student: {student}, Average: {average}")
