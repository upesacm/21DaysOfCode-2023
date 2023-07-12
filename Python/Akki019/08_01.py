#Write a Python program that takes a list of tuples containing student names and their corresponding marks. 
#Unpack the tuples and display each student's name with their marks.
#Example - 
#Input: students = [('Alice', 80), ('Bob', 90), ('Charlie', 75)]
#Output: Alice: 80
#Bob: 90
#Charlie: 75.


students=eval(input("Enter list of tuples of students"))

for student in students:
    print(f'{student[0]}: {student[1]}')
