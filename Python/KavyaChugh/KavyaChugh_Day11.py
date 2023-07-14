#Write a Python program that reads a CSV file called "grades.csv" containing student names and their grades. Calculate the average grade and display it with a descriptive message.

import csv
def calculate_average_grade(file_name):
    total = 0
    count = 0
    with open(file_name, newline='') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            total += int(row['Grade'])
            count += 1
    if count > 0:
        return total/count
    else:
        return 0
file_name = 'grades.csv'
average_grade = calculate_average_grade(file_name)
print(f'The average grade is {average_grade}')

