# Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects. The program should calculate and print the average grade for each student. The average grade should be rounded to two decimal places.
students = [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]

for name, *grades in students:
    average_grade = round(sum(grades) / len(grades), 2)
    print(f"{name}: {average_grade}")
