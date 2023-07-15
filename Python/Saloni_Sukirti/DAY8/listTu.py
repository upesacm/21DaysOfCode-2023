# Python

# 1. Write a Python program that takes a list of tuples containing student names and their corresponding marks. Unpack the tuples and display each student's name with their marks.
# Example - 
# Input: students = [('Alice', 80), ('Bob', 90), ('Charlie', 75)]
# Output: Alice: 80
# Bob: 90
# Charlie: 75.


def display_marks(students):
    #print(students)
    for student, marks in students:
        print(f"{student}: {marks}")

students = []
num = int(input("Number of students: "))

try:
    for i in range(0,num): 
        student_name, student_marks = input("Name of student: "),int(input("Marks of student: "))
        students.append((student_name, student_marks))
except:
    ValueError

display_marks(students)