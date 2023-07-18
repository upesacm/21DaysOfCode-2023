def check_subset(set1, set2):
    if set1.issubset(set2) and set2.issubset(set1):
        return "Both sets are equal and have the same elements."
    elif set1.issubset(set2):
        return "The first set is a subset of the second set."
    elif set2.issubset(set1):
        return "The second set is a subset of the first set."
    else:
        return "The sets have no subset relationship."

# Example usage
set1 = set(input("Enter elements of the first set (space-separated): ").split())
set2 = set(input("Enter elements of the second set (space-separated): ").split())

result = check_subset(set1, set2)
print(result)