#1. Write a Python program that takes a list of tuples containing student names and their corresponding marks. Unpack the tuples and display each student's name with their marks.
#Example - 
#Input: students = [('Alice', 80), ('Bob', 90), ('Charlie', 75)]
#Output: Alice: 80
#Bob: 90
#Charlie: 75.

# Define an empty list to store the tuples
students = []

# Ask the user how many students they want to enter
n = int(input('How many students do you want to enter? '))

# Loop n times and ask the user to enter the name and mark of each student
for i in range(n):
  # Get the name and mark of the student as a string
  name = input(f'Enter the name of student {i+1}: ')
  mark = input(f'Enter the mark of student {i+1}: ')

  # Convert the mark to an integer
  mark = int(mark)

  # Create a tuple with the name and mark
  student = (name, mark)

  # Append the tuple to the list
  students.append(student)

# Loop through the list and unpack each tuple
for name, mark in students:
  # Display the name and mark of each student
  print(f'{name}: {mark}')




#2. Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects. The program should calculate and print the average grade for each student. The average grade should be rounded to two decimal places.
#Example -
#Input: [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]
#Output:
#Alice: 81.67
#Bob: 90.67
#Charlie: 81.00

# Define an empty list to store the tuples
students = []

# Ask the user how many students they want to enter
n = int(input('How many students do you want to enter? '))

# Loop n times and ask the user to enter the name and grades of each student
for i in range(n):
  # Get the name of the student as a string
  name = input(f'Enter the name of student {i+1}: ')

  # Get the grades of the student as a string
  grades = input(f'Enter the grades of student {i+1} in three subjects separated by commas: ')

  # Split the grades by commas and convert them to integers
  grades = [int(g) for g in grades.split(',')]

  # Create a tuple with the name and grades
  student = (name, *grades)

  # Append the tuple to the list
  students.append(student)

# Loop through the list and unpack each tuple
for name, g1, g2, g3 in students:
  # Calculate the average grade of the student
  avg = (g1 + g2 + g3) / 3

  # Round the average grade to two decimal places
  avg = round(avg, 2)

  # Display the name and average grade of each student
  print(f'{name}: {avg}')
