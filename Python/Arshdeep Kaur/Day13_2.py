#Write a Python program that takes two sets of integers as input and determines if one set is a subset of the other set. The program should display whether the first set is a subset of the second set, the second set is a subset of the first set, or if they have no subset relationship.

set1 = set()
set2 = set()

num1 = int(input("Enter the number of elements for the first set: "))
for i in range(num1):
    ele = input("Enter the element: ")
    set1.add(ele)

num2 = int(input("Enter the number of elements for the second set: "))
for i in range(num2):
    ele = input("Enter the element: ")
    set2.add(ele)

if(set1.issubset(set2)):
    print("Set 1 is the subset of Set 2")
elif(set2.issubset(set1)):
    print("Set 2 is the subset of Set 1")
else:
    print("There is no subset relationship between the two sets")
