set1 = {1, 2, 3}
set2 = {1, 2, 3, 4, 5}

if set1.issubset(set2):
    print("set1 is a subset of set2")
elif set2.issubset(set1):
    print("set2 is a subset of set1")
else:
    print("set1 and set2 have no subset relationship")

