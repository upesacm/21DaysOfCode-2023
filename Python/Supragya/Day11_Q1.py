# Q1  Write a Python program that reads a CSV file called "grades.csv" containing student names and their grades. 
# Calculate the average grade and display it with a descriptive message.
import csv
def calculate_average_grade(filename):
    total_grade = 0
    count = 0
    with open(filename, 'r') as file:
        reader = csv.reader(file)
        next(reader)  # Skip the header row
        for row in reader:
            student_name = row[0]
            grade = float(row[1])
            total_grade += grade
            count += 1
    if count > 0:
        average_grade = total_grade / count
        return average_grade
    else:
        return None

filename = 'grades.csv'
average_grade = calculate_average_grade(filename)
if average_grade is not None:
    print("The average grade is:", average_grade)
else:
    print("No grades found in the file.")
