def secondsmall(L):
    L.sort()
    return L[1]
    

L=[]
n=int(input("Enter number of integers\n"))
for i in range (n):
    p=int(input("Enter number\n"))
    L.append(p)
    
a=secondsmall(L)
print(a)
    
