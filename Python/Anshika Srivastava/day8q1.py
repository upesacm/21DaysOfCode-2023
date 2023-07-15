students = []
n= int(input("Enter the number of students\n"))
for i in range(n):
    name = input("Enter student name\n")
    marks = int(input("Enter student marks\n"))
    students.append((name, marks))
    
for student in students:
    name, marks = student
    print(f"{name}: {marks}")
