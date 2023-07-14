#Write a Python program that reads a CSV file called "grades.csv" containing student names and their grades. Calculate the average grade and display it with a descriptive message.
import csv

def calculate_average_grade(grades_file):
    total_grades = 0
    num_students = 0

    with open(grades_file, 'r') as file:
        csv_reader = csv.reader(file)
        next(csv_reader)  # Skip the header row

        for row in csv_reader:
            if len(row) == 2:
                grade = float(row[1])
                total_grades += grade
                num_students += 1

    if num_students > 0:
        average_grade = total_grades / num_students
        return average_grade
    else:
        return None

# Main program
grades_file = "grades.csv"
average_grade = calculate_average_grade(grades_file)

if average_grade is not None:
    message = "The average grade is {:.2f}.".format(average_grade)
else:
    message = "No grades found in the file."

print(message)
