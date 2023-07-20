#Write a Python function that takes two lists as input and returns a new list containing only the common elements between the two input lists.

def commonElements():

    list1 = []
    list2 = []

    num1 = int(input("Enter the length of list 1: "))
    for i in range(num1):
        ele1 = input("Enter the element: ")
        list1.append(ele1)

    num2 = int(input("Enter the length of list 2: "))
    for j in range(num2):
        ele2 = input("Enter the element: ")
        list2.append(ele2)
    
    common_elements = []

    for num in list1:
        if num in list2 and num not in common_elements:
            common_elements.append(num)

    return common_elements


newList = commonElements()
print(newList)
