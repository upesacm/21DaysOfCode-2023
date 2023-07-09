def largest(l):
    return max(l)

n=int(input("Enter no. of elements : "))
print("Enter elements: ")
l=[]
for i in range(n):
    l.append(int(input()))

a=largest(l)
print(a)
