#Solution of second question

n=(input()).split()
lst=[]
for n in n:
    a=int(n)
    lst.append(a)
a=lst[0]
b=lst[1]
lst1=[]
d=0
lst2=[]
for i in range(a):
    x=input().split()
    for n in x:
        f=int(n)
        lst1.append(f)
    for j in range(b):
        d+=lst1[j]
    lst2.append(d)
    d=0
    lst1=[]
for i in range(b):
    e=lst2[i]**2
    for i in range(a):
        print(f'{e}', end=' ')
    print()
