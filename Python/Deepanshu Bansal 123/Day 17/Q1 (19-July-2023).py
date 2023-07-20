n=int(input("Enter n for number of elements in list1 "))
m=int(input("Enter m for number of elements in list2 "))
list1=[]
list2=[]
list3=[]
for i in range(0,n):
    val=int(input("Enter val for list1 "))
    list1.append(val);
    
for i in range(0,m):
    val=int(input("Enter val for list2 "))
    list2.append(val); 
    
for i in range(0,n):
    for j in range(0,m):
        if list1[i]==list2[j]:
            list3.append(list1[i])
            
print("list3 as common elements in list1, list2")            
for i in range(0,len(list3)):
    print(list3[i])
        
