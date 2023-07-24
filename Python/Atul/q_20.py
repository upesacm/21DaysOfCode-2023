a=[1,3,55,233,423,6,43,34,5,3377,7556]
x=3377
flag=0
for i in range(len(a)):
    if a[i]==x:
        flag=1
if flag==1:        
    print("the element is found",a[i])
else:
    print("the element is not found")