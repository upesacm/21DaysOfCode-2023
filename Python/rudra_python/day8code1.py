# Write a Python program that takes a list of tuples containing student names and their corresponding marks. Unpack the tuples and display each student's name with their marks.
students = [('Alice', 80), ('Bob', 90), ('Charlie', 75)]

for name, marks in students:
    print(f"{name}: {marks}")
