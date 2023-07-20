'''Write a Python function that takes two lists as input and returns a new list containing only the common elements between the two input lists.'''

def lists():
    L=[]
    n=int(input("Enter size of list\n"))
    for i in range(n):
        element=int(input("Enter list element\n"))
        L.append(element)
    return L
    
l3=[]
l1=lists()
l2=lists()
for i in l1:
    if i in l2 and i not in l3:
        l3.append(i)
print("Common elements:", l3)
