# Write a Python program that takes two sets of integers as input and determines if one set is a subset of the other set. The program should display whether the first set is a subset of the second set, the second set is a subset of the first set, or if they have no subset relationship.
set1 = set(map(int, input("Enter the first set of integers (space-separated): ").split()))
set2 = set(map(int, input("Enter the second set of integers (space-separated): ").split()))

if set1.issubset(set2):
    print("The first set is a subset of the second set.")
elif set2.issubset(set1):
    print("The second set is a subset of the first set.")
else:
    print("The sets have no subset relationship.")
