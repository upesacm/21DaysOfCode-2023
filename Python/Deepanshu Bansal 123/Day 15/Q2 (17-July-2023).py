N=int(input("Enter N number "))
fab=[]
fab.append(1);
fab.append(1);
for i in range(2,N+1):
    val=fab[i-1]+fab[i-2]
    fab.append(val);
    
print("Nth fibonacci number in sequence is",fab[N]);    
    
