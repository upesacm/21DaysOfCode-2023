n=int(input("Enter n number of word in list1 "))
list1=[]
dic={}
for i in range(0,n):
    val=str(input("Enter val "))
    list1.append(val)
    
count=0    
for i in range(0,n):
    count=0
    for j in range(0,n):
        if list1[i]==list1[j]:
            count=count+1
    dic[list1[i]]=count
    
print(dic)
