list1=[]
a=int(input("Enter your Number of Elements:"))
for i in range(0,a):
    b=int(input())
    list1.append(b)
    list1.sort()
    
print("The Second smallest number is :",list1[1])
    

