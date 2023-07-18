#Q1 Create two sets, "set1" and "set2," with some common elements. Print the union of the two sets with 
# a descriptive message.
set1 = set(input("Enter elements for set1 (separated by spaces): ").split())
set2 = set(input("Enter elements for set2 (separated by spaces): ").split())
union_set = set1.union(set2)
print("Union of set1 and set2:", union_set)
