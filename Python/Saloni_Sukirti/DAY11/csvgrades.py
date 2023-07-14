# Python

# 1. Write a Python program that reads a CSV file called "grades.csv" containing student names and their grades. 
#Calculate the average grade and display it with a descriptive message.

import pandas as pd

grades = pd.read_csv("DAY11\grades.csv")
print(grades)
average_grade=grades["Grade"].mean()
print("Average grade: ", round(average_grade))