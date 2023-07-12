students = []
n= int(input("Enter the number of students\n"))
for i in range(n):
    name = input("Enter student name\n")
    marks1 = int(input("Enter marks for 1st subject\n"))
    marks2 = int(input("Enter marks for 2nd subject\n"))
    marks3 = int(input("Enter marks for 3rd subject\n"))
    students.append((name, marks1,marks2,marks3))
    
for student in students:
    name, marks1, marks2, marks3 = student
    average = round((marks1 + marks2 + marks3) / 3, 2)
    print(f"{name}: {average}")
