'''
2. Write a Python program that takes two sets of integers as input and determines if one set is a subset of the other set.
 The program should display whether the first set is a subset of the second set, the second set is a subset of the first set,
   or if they have no subset relationship.
'''
def check_subset_relationship(set1, set2):
    if set1.issubset(set2) and set2.issubset(set1):
        return "Both sets are equal, and they are subsets of each other."
    elif set1.issubset(set2):
        return "Set 1 is a subset of Set 2."
    elif set2.issubset(set1):
        return "Set 2 is a subset of Set 1."
    else:
        return "There is no subset relationship between the two sets."
input_set1 = input("Enter elements for set1 separated by spaces: ")
set1 = set(map(int, input_set1.split()))
input_set2 = input("Enter elements for set2 separated by spaces: ")
set2 = set(map(int, input_set2.split()))
result = check_subset_relationship(set1, set2)
print(result)
