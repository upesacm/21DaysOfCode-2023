#Write a Python program that takes a list of tuples containing student names and their corresponding marks. Unpack the tuples and display each student's name with their marks.

def student_marks(list):
    for name, marks in list:
        print(name,":",marks)
list = []
num= int(input("Enter number of students: "))
for i in range(0, num):
    name = input("Enter name of student: ")
    marks = int(input("Enter marks of student: "))
    list.append((name, marks))
student_marks(list)
