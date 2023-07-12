#Q1 Write a Python program that takes a list of tuples containing student names and their corresponding marks. 
# Unpack the tuples and display each student's name with their marks.
num = int(input("Enter the number of students: "))
students = []
for i in range(num):
    name = input("Enter student name: ")
    marks = float(input("Enter marks: "))
    tuple = (name, marks)
    students.append(tuple)
for student, marks in students:
    print(f"Student: {student}, Marks: {marks}")


