n = int(input("Enter number of elements for set1: "))

s1 = []

for i in range(0, n):
    num = int(input("Enter the number: "))
    s1.append(num)
    
s1 = set(s1)

n2 = int(input("Enter number of elements for set2: "))

s2 = []

for i in range(0, n2):
    num = int(input("Enter the number: "))
    s2.append(num)
    
s2 = set(s2)

if s1.issubset(s2):
    print("Set 1 is a subset of Set 2.")
elif s2.issubset(s1):
    print("Set 2 is a subset of Set 1.")
else:
    print("Set 1 and Set 2 have no subset relationship.")
