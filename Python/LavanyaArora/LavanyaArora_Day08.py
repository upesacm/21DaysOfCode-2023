#Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects. The program should calculate and print the average grade for each student. The average grade should be rounded to two decimal places.

def calc_avg(list):
    for i in range(0, len(list)):
        avg = (list[i][1] + list[i][2] + list[i][3]) / 3
        print(list[i][0] + ": " + str(round(avg, 2)))
list = []
n = int(input("Enter number of students: "))
for i in range(0, n):
    name = input("Enter student name: ")
    grade1 = int(input("Enter grade 1: "))
    grade2 = int(input("Enter grade 2: "))
    grade3 = int(input("Enter grade 3: "))
    list.append((name, grade1, grade2, grade3))
calc_avg(list)
