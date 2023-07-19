#Write a function that accepts two lists of integers and returns a new list containing the common elements between the two lists, without duplicates.

def commonElements():

    list1 = []
    list2 = []

    num1 = int(input("Enter the length of list 1: "))
    for i in range(num1):
        ele1 = int(input("Enter the element: "))
        list1.append(ele1)

    num2 = int(input("Enter the length of list 2: "))
    for j in range(num2):
        ele2 = int(input("Enter the element: "))
        list2.append(ele2)
    
    common_elements = []

    for num in list1:
        if num in list2 and num not in common_elements:
            common_elements.append(num)

    return common_elements


newList = commonElements()
print(newList)
