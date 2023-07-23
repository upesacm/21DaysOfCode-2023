#Write a Python program that implements a linear search algorithm to find a specific element in a given list. Display a message indicating whether the element is found or not.

def linearSearch(list1, n, ele):

    for i in range(n):
        if(list1[i] == ele):
            return i
        
    return -1


list1 = []

num = int(input("Enter the length of list: "))
for i in range(num):
    ele = int(input("Enter the elements of the list: "))
    list1.append(ele)

ele = int(input("Enter the element to search: "))
index = linearSearch(list1, num, ele)
if index != -1:
    print(f"Element {ele} found at index {index}.")
else:
    print(f"Element {ele} not found in the list.")
