"""
1. Create two sets, "set1" and "set2," with some common elements. Print the union of the two sets with a descriptive message.
"""
input_set1 = input("Enter elements for set1 separated by spaces: ")
set1 = set(map(int, input_set1.split()))
input_set2 = input("Enter elements for set2 separated by spaces: ")
set2 = set(map(int, input_set2.split()))
union_set = set1.union(set2)
print("The union of set1 and set2 is:", union_set)
