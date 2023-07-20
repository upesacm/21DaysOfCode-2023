#1. Write a Python program that reads a CSV file called "grades.csv" containing student names and their grades. Calculate the average grade and display it with a descriptive message.

# Import the csv module
import csv

# Initialize an empty list to store the grades
grades = []

# Open the grades.csv file in read mode
with open("grades.csv", "r") as csv_file:
    # Create a csv reader object
    reader = csv.reader(csv_file)
    # Skip the first row (header)
    next(reader)
    # Loop through each row in the file
    for row in reader:
        # Get the student name and grade from the row
        name = row[0]
        grade = float(row[1])
        # Append the grade to the grades list
        grades.append(grade)
        # Print the student name and grade
        print(f"{name}: {grade}")

# Calculate the average grade using the sum and len functions
average = sum(grades) / len(grades)

# Print the average grade with a descriptive message
print(f"The average grade is {average}")





#2. Write a Python program that takes a list of integers as input from the user and creates two new lists: one containing the even numbers from the input list and another containing the odd numbers. The program should then write these two lists to separate files. The user should enter the filenames for the input and output files.
# Ask the user for the input filename
input_file = input("Enter the name of the input file: ")

# Open the input file in read mode
with open(input_file, "r") as in_file:
    # Read the contents of the file and split them by commas
    numbers = in_file.read().split(",")
    # Convert each number to an integer and store them in a list
    numbers = [int(num) for num in numbers]

# Initialize two empty lists to store the even and odd numbers
even_numbers = []
odd_numbers = []

# Loop through each number in the list
for num in numbers:
    # Check if the number is even or odd and append it to the corresponding list
    if num % 2 == 0:
        even_numbers.append(num)
    else:
        odd_numbers.append(num)

# Ask the user for the output filenames
even_file = input("Enter the name of the output file for even numbers: ")
odd_file = input("Enter the name of the output file for odd numbers: ")

# Open the output files in write mode
with open(even_file, "w") as out_file1, open(odd_file, "w") as out_file2:
    # Write the even and odd numbers to the files, separated by commas
    out_file1.write(",".join([str(num) for num in even_numbers]))
    out_file2.write(",".join([str(num) for num in odd_numbers]))

# Print a confirmation message
print(f"The even and odd numbers have been written to {even_file} and {odd_file} respectively.")
