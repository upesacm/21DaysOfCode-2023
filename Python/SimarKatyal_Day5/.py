#Write a Python program that takes a student's score as input and determines whether the student has passed or failed. Assume that the 
#passing score is 60 or greater.
print("Welcome to ACADEMIC STATUS checking machine!!")
score = float(input("Please enter your total score : "))
if (60<=score<=100) :
    print("Congratualations!!\nYou have passed!!")
elif (score>100) :
    print("Maximum marks is 100.\nYou can not have a score greater than 100.\n")
else :
    print("Oops!!\nYou failed!!\nTry attempting the test again!!")
print("Thank you!!\nKeep visiting us!!")
