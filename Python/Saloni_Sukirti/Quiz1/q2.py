try:
    b = input()
    l = list(map(int, b.split()))
    
except ValueError:
    pass

a = max(l)
# print(a)
l.remove(a)

b = max(l)
# print(b)
l.remove(b)

if a and b in l:
    print(-1)
else:
    print("Product Of Largest Distinct Numbers:",a*b)
