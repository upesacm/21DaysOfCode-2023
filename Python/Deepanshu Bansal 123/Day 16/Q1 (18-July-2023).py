n=int(input("Enter n "))
list1=[]
for i in range(0,n*n):
    val=int(input("Enter random number 1 to 10 "))
    list1.append(val);
    
count=0    
for i in range(0,n*n):
    print(list1[i],end=" ")
    count=count+1
    if count==n:
        print( )
        count=0
        
