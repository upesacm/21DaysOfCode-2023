'''Write a Python program that sorts a given list of numbers in ascending order using the bubble sort algorithm. Print the sorted list with a descriptive message.'''

#sol
n=int(input("Enter number of element you want to enter:"))
list1=[]
for i in range(n):
    a=int(input("Enter number:"))
    list1.append(a)
print(f'The list entered by the user is {list1}')
for i in range(n-1):
    for j in range(n-i-1):
        if list1[j]>list1[j+1]:
            t=list1[j]
            list1[j]=list1[j+1]
            list1[j+1]=t
        else:
            pass
print(f'The list after sorting {list1}')

'''Implement the merge sort algorithm in Python to sort a given list of numbers in descending order. Display the sorted list with a descriptive message. '''

#sol
n = int(input("Enter number of elements you want to enter: "))
list1 = []
for i in range(n):
    a = int(input("Enter number: "))
    list1.append(a)
print(f'The list entered by the user is {list1}')

def merge(list1, first, mid, last):
    n1 = mid - first + 1
    n2 = last - mid
    list2 = []
    list3 = []
    for i in range(n1):
        list2.append(list1[first + i])  
    for j in range(n2):
        list3.append(list1[mid + 1 + j]) 
    i, j, k = 0, 0, first
    while i < n1 and j < n2:
        if list2[i] <= list3[j]:
            list1[k] = list2[i]
            i += 1
        else:
            list1[k] = list3[j]
            j += 1
        k += 1
    
    while i < n1:
        list1[k] = list2[i]
        i += 1
        k += 1
    while j < n2:
        list1[k] = list3[j]
        j += 1
        k += 1

def mergeSort(list1, first, last):
    if first < last:
        mid = (first + last) // 2
        mergeSort(list1, first, mid)
        mergeSort(list1, mid + 1, last)  
        merge(list1, first, mid, last)

first = 0
last = n - 1 
mergeSort(list1, first, last)
print(f'The sorted list is {list1}')
