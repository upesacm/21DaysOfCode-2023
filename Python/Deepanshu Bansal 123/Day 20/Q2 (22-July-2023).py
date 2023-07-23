n=int(input("Enter n number of elements in list1 "))
list1=[]
for i in range(0,n):
    val=int(input("Enter val "))
    list1.append(val)
 
mid=int(n/2)
for i in range(0,mid-1):
    if list1[i]<list1[i+1]:
        temp=list1[i+1];
        list1[i+1]=list1[i]
        list1[i]=temp
        
for i in range(mid,n-1):
    if list1[i]<list1[i+1]:
        temp=list1[i+1];
        list1[i+1]=list1[i]
        list1[i]=temp 
        
i=0
j=mid
a=n
while a>0:
    if list1[i]>list1[j]:
        print(list1[i])
        i=i+1
    elif list1[i]<list1[j]:
        print(list1[j])
        j=j+1
        
        
    if i>=mid and j<n:
        for k in range(j,n):
            print(list1[k])
        break
    
    elif i<mid and j>=n:
        for k in range(i,mid):
            print(list1[k]) 
        break    
           
    a=a-1
