# Write a Python program that takes two sets of integers as input and determines if one set is a subset of the other set. 
# The program should display whether the first set is a subset of the second set, 
# the second set is a subset of the first set, or if they have no subset relationship.


a=input("Enter set1 (all integers seperated by space) : ")
b=input("Enter set2 (all integers seperated by space) : ")

a=set(list(map(int,a.split())))
b=set(list(map(int,b.split())))

if a==b:
    print("Both sets are equal hence subset of each other")
elif a.issubset(b):
    print('Set a is a subset of Set b')
elif b.issubset(a):
    print('Set b is a subset of Set a')
else:
    print("There is no relation in them")
