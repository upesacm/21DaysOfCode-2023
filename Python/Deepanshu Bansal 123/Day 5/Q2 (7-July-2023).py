a=int(input("Enter a "))
b=int(input("Enter b "))
count=0
print("All prime number between numbers",a,b)
for i in range(a,b+1):
    count=0
    for j in range(1,i+1):
        if i%j==0:
            count=count+1
    
    if count==2:
        print(i)
    
