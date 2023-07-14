import csv

def calculate_average_grade(filename):
    with open(filename, 'r') as file:
        reader = csv.reader(file)
        next(reader)  # Skip the header row
        grades = [float(row[1]) for row in reader]

    average_grade = sum(grades) / len(grades)
    return average_grade

filename = "grades.csv"  # Update with your CSV file name
average_grade = calculate_average_grade(filename)
print(f"The average grade is: {average_grade}")

