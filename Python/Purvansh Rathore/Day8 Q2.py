#DAY 8 Question 2

students = [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]

for student in students:
    name, *grades = student  # Unpack the tuple into name and grades
    average_grade = sum(grades) / len(grades)  # Calculate the average grade
    average_grade = round(average_grade, 2)  # Round the average grade to two decimal places
    print(f"{name}: {average_grade}")
