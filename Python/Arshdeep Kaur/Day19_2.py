#Write a Python program that implements a binary search algorithm to search for a target number in a sorted list. If the target number is found, display its index. If the target number is not found, display the index where it should be inserted to maintain the sorted order.

def binarySearch(list1, ele):
    
    left, right = 0, len(list1) - 1

    while left <= right:
        mid = (left + right) // 2
        midVal = list1[mid]

        if midVal == ele:
            return mid
        elif midVal < ele:
            left = mid + 1
        else:
            right = mid - 1

    return left

list1 = []

num = int(input("Enter the length of list: "))
for i in range(num):
    ele = int(input("Enter the elements of the list in soretd order: "))
    list1.append(ele)

ele = int(input("Enter the element to search: "))

index = binarySearch(list1, ele)
if list1[index] == ele:
    print(f"Element {ele} found at index {index}.")
else:
    print(f"Element {ele} not found. Insert at index {index} to maintain the sorted order.")
