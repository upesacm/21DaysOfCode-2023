n=int(input("Enter no. of elemnts : "))
print("enter list elements : ")
l=[]
for i in range(n):
    l.append(int(input()))


l1=[i for i in l if i<max(l)]
print("second largest element is",max(l1))
