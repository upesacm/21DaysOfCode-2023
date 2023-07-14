''' Write a Python program that takes two sets of integers as input and determines if one set is a subset of the other set. 
The program should display whether the first set is a subset of the second set, 
the second set is a subset of the first set, or if they have no subset relationship..'''

set1 = set(input("Enter elements for set1 separated by space\n ").split())
set2 = set(input("Enter elements for set2 separated by space\n ").split())
if set1.issubset(set2):
    print("set1 is a subset of set2.")
elif set2.issubset(set1):
    print("set2 is a subset of set1.")
else:
    print("set1 and set2 have no subset relationship.")
