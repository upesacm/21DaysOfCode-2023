a=input()
if a!='' and a!=None:
    a=a.split()
    a=list(map(int,a))
    a.sort()
    b=[]
    for i in a:
        if i not in b:
            b.append(i)
else:
    b=[]
print("The Sorted Non-Duplicate List:",b)