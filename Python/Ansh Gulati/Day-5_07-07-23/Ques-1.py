# Ques- Write a Python program that takes a student's score as input and determines whether the student has passed or failed. Assume that the passing score is 60 or greater.

score=int(input("Enter your score"))
if(60<=score<=100):
    print("Student has passed the exam")
elif(0<=score<60):
    print("Student has failed the exam")
else:
    print("Invalid Input")
