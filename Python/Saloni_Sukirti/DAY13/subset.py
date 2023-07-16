# 2. Write a Python program that takes two sets of integers as input and determines 
#if one set is a subset of the other set. The program should display whether the first
# set is a subset of the second set, the second set is a subset of the first set, or if they have no subset relationship.


def check_subset(set1, set2):
    if set1.issubset(set2):
        return "First set is a subset of the second set."
    elif set2.issubset(set1):
        return "Second set is a subset of the first set."
    else:
        return "The sets have no subset relationship."

set1_input = input("Enter integers for the first set, separated by spaces: ")
set2_input = input("Enter integers for the second set, separated by spaces: ")

set1 = set(map(int, set1_input.split()))
set2 = set(map(int, set2_input.split()))

print("The two sets are: ",set1," and ",set2)
result = check_subset(set1, set2)
print(result)
