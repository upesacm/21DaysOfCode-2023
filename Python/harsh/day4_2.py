l1=map(int,input("enter 2 inputs").split(","))
a,b=l1
print("enter operation you want to perform\n1:addition\n2:subtraction\n3:multiplication\n4:division")
option=int(input(""))
if(option==1):
    print("the result is",a+b)
elif(option==2):
    print("the result is ",a-b)
elif(option==3):
    print("the result is",a*b)
elif(option==4):
    print("the result is",a/b)
else:
    print("enter correct option")