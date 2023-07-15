print("Enter score for 5 subjects out of 100")
a=float(input("Subject-1 "))
b=float(input("Subject-2 "))
c=float(input("Subject-3 "))
d=float(input("Subject-4 "))
e=float(input("Subject-5 "))
score=(a+b+c+d+e)/5.0
print("Score is ",score)
if(score>=60.0):
    print("Student has passed")
else:
    print("Student has failed")
