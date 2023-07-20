N=int(input("Enter N for number of elements in list1 "))
list1=[]
dic={}
for i in range(0,N):
    val=str(input("Enter val for list1 "))
    list1.append(val);
    
count=0    
for i in range(0,N):
    count=0
    for j in range(0,N):
        if list1[i]==list1[j]:
            count=count+1
    dic[list1[i]]=count    
    
print("dictionary with keys, values",dic)
