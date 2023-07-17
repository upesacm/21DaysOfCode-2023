L=[]
n=int(input("Enter number of integers\n"))
for i in range (n):
    p=int(input("Enter number\n"))
    L.append(p)
L.sort()
print(L[n-1]) #largest
