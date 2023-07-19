try:
    b = input()
    l = list(map(int,b.split()))
except ValueError:
    pass

l = set(l)
l = sorted(l)
print("The Sorted Non-Duplicate List:",l)
    
