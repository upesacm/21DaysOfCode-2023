# Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects.
# The program should calculate and print the average grade for each student. The average grade should be rounded to two decimal places.
# Example -
# Input: [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]
# Output:
# Alice: 81.67
# Bob: 90.67
# Charlie: 81.00

students=eval(input("Enter list of tuples of students"))

for s in students:
    avg=(s[1]+s[2]+s[3])/3
    print(f'{s[0]}: {avg:5.2f}')
