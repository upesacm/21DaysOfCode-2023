import pandas as pd

def average(file_grade):
    df = pd.read_csv(file_grade)
    
    if 'Grade' in df.columns:
        average_grade = df['Grade'].mean()
        return average_grade
    else:
        return None

file_path = "grades.csv"

average_grade = average(file_path)
if average_grade is not None:
    print( f"The average grade is: {average_grade:.2f}")
else:
    print( "No data found.")
