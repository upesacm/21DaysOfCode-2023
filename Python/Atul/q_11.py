def lis(a):
    max=list1[0]
    for a in list1:
        if a < max:
            max=a
    return max

list1=[]
a=int(input("Enter your Number of Elements:"))
for i in range(0,a):
    b=int(input())
    list1.append(b)
print("The Maximum number is :",lis(list1))
    

