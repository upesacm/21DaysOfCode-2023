l=[]
n=True
while n:
    var=int(input("enter number"))
    if var<0:
        n=False
        break
    l.append(var)
sum=0

for i in l:
    sum=sum+i
print("the sum is",sum)