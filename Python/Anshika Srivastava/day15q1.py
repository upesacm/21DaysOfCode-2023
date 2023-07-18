'''Write a function that accepts two lists of integers and returns a new list containing the common elements between the two lists, without duplicates.'''

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
