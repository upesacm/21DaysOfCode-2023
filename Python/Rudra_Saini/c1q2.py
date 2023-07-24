l=list(map(int, input().split()))
m=0
for i in range(len(l)):
    for j in range(i+1,len(l)):

        if l[i]*l[j]>m:
            m=l[i]*l[j]
    
if m!=0:
    print("Product Of Largest Distinct Numbers:",m)
else:
    print("Product Of Largest Distinct Numbers:",-1)
