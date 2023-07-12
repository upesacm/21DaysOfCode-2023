
# 2. Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects. The program should calculate
# and print the average grade for each student. The average grade should be rounded to two decimal places.
# Example -
# Input: [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]
# Output:
# Alice: 81.67
# Bob: 90.67
# Charlie: 81.00

t =  [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]

for(students, mark1, mark2, mark3) in t:
    print(students+": ",round((mark1+mark2+mark3)/len(t),2))


