import pandas as pd

data = pd.read_csv("grades.csv")

average_grade = data["Grade"].mean()

print("The average grade is:", average_grade)
