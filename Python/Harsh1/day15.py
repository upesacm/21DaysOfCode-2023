'''Write a function that accepts two lists of integers and returns a new list containing the common elements between the two lists, without duplicates.'''

#sol
def intersect(list1, list2):
    set1=set(list1)
    set2=set(list2)
    return list(set1.intersection(set2))

n1=input("Enter first list with spaces:").split()
n2=input("Enter second list with spaces:").split()
list1=[]
list2=[]
for n1 in n1:
    a=int(n1)
    list1.append(a)
for n2 in n2:
    b=int(n2)
    list2.append(b)

print(f'The common elements between the two lists {list1} {list2} is {intersect(list1, list2)}')

''' Write a recursive Python function to calculate the nth Fibonacci number. Test the function by finding the 10th Fibonacci number and display it with a descriptive message.'''

#sol
def fibonacci(n):
    n1=0
    n2=1
    for i in range(n-2):
        n3=n1+n2
        n1=n2
        n2=n3
    return n3
n=int(input('Enter the number to calculate the nth Fibonacci number:'))
print(f'The fibonacci number of {n} digit is {fibonacci(n)}')
