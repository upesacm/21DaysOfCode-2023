marks=float(input("enter your marks"))
if(marks>0 and marks<60):
    print("FAILED")
elif(marks>=60 and marks<=100):
    print("PASS")
else:
    print("invalid number")
