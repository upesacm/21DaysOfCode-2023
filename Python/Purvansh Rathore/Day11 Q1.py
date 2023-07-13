import csv

# File path of the existing CSV file
filename = r"grades.csv"

# Student names and grades to be added to the CSV file
students = [
    {"Name": "John Doe", "Grade": 85},
    {"Name": "Jane Smith", "Grade": 92},
    {"Name": "Adam Johnson", "Grade": 78},
    {"Name": "Emily Davis", "Grade": 95},
    {"Name": "Michael Lee", "Grade": 88},
    {"Name": "Purvansh Rathore", "Grade": "O"},
    {"Name": "Student 1", "Grade": 75},
    {"Name": "Student 2", "Grade": 80},
    {"Name": "Student 3", "Grade": 90},
    {"Name": "Student 4", "Grade": 87},
    {"Name": "Student 5", "Grade": 92}
]

# Write student names and grades to the CSV file
with open(filename, 'w', newline='') as file:
    writer = csv.DictWriter(file, fieldnames=["Name", "Grade"])
    writer.writeheader()
    writer.writerows(students)

print(f"New student information has been added to the file '{filename}'.")
