'''Create two sets, "set1" and "set2," with some common elements. Print the union of the two sets with a descriptive message.'''

#sol
set1={1, 2, 3, 4}
set2={3, 4, 5, 6}

def union1(x, y):
    z=x.union(y)
    return z

print(f'The union of {set1} and {set2} is {union1(set1, set2)}')

'''Write a Python program that takes two sets of integers as input and determines if one set is a subset of the other set. The program should display whether the first set is a subset of the second set, 
the second set is a subset of the first set, or if they have no subset relationship.'''

#sol
set1=set(input("Enter number of set1:").split())
set2=set(input("Enter number of set2:").split())

if set2.issubset(set1) is True:
    print('Set2 is subset of set1')
elif set1.issubset(set2) is True:
    print('Set1 is subset of set2')
else:
    print('They have no subset relationship.')
