def check(set1, set2):
    if set1.issubset(set2) and set2.issubset(set1):
        return "Both sets are equal"
    elif set1.issubset(set2):
        return "Set 1 is a subset of Set 2"
    elif set2.issubset(set1):
        return "Set 2 is a subset of Set 1"
    else:
        return "No subset relationship"
set1 = set(input().split(","))
set2 = set(input().split(","))
ans= check(set1, set2)
print(ans)
