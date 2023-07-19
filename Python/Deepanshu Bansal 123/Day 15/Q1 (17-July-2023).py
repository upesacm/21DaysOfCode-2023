n=int(input("Enter n number of element in list1 "))
m=int(input("Enter n number of element in list2 "))
list1=[]
list2=[]
list3=[]
for i in range(0,n):
    val=int(input("Enter val "))
    list1.append(val);
    
for i in range(0,m):
    val=int(input("Enter val "))
    list2.append(val);
    
for i in range(0,n):
    for j in range(0,m):
        if list1[i]==list2[j]:
            list3.append(list1[i])
            
for i in range(0,len(list3)):
    if i==0:
        print("[",list3[i],",",end=" ")
    elif i==len(list3)-1:
        print(list3[i],"]")
    else:
        print(list3[i],",",end=" ")
