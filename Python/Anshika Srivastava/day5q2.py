a=int(input("Enter first number "))
b=int(input("Enter second number "))
i=a
d=0
while(i<=b):
    j=2
    c=0
    while(j<i):
        if(i%j==0):
            c=1
            break
        j=j+1
            
    if(c==0):
        print(i)
        d=1
    i=i+1
if(d==0):
    print("No prime numbers in entered range")
