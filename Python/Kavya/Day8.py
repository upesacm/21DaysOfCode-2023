#2
def calculate_average_grades(students):
    for student in students:
        name = student[0]
        grades = student[1:]
        avg = sum(grades) / len(grades)
        r_avg= round(avg, 2)
        print("{name}: {r_avg}")
li= input("Enter the student data: ")
students= eval(li)
calculate_average_grades(students)
