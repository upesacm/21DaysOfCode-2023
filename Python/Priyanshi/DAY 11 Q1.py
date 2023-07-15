import csv
def avgg(file_name):
    with open(file_name, 'r') as file:
        read= csv.reader(file)
        grades = []
        for row in read:
            if row[1].isdigit():
                grades.append(int(row[1]))
        avggrade = sum(grades) / len(grades)
        return avggrade
csv_file = "grades.csv"
average_grade = avgg(csv_file)
print(f"The average grade is: {average_grade}")
