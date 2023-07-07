# Write a Python program that takes a student's score as input and determines whether the student has passed or failed. Assume that the passing score is 60 or greater.
def check_pass_fail(score):
    if score >= 60:
        return "Passed"
    else:
        return "Failed"

# Get the student's score from user input
score = int(input("Enter the student's score: "))

# Check if the student has passed or failed
result = check_pass_fail(score)

# Print the result
print("The student", result)
