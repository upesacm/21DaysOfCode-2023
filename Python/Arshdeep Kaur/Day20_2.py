#Implement the merge sort algorithm in Python to sort a given list of numbers in descending order. Display the sorted list with a descriptive message. 

def mergeSort(list1):
    if len(list1) <= 1:
        return list1

    mid = len(list1) // 2
    leftHalf = list1[:mid]
    rightHalf = list1[mid:]

    leftHalf = mergeSort(leftHalf)
    rightHalf = mergeSort(rightHalf)

    return merge(leftHalf, rightHalf)


def merge(left, right):
    merged = []
    leftIdx, rightIdx = 0, 0

    while leftIdx < len(left) and rightIdx < len(right):
        if left[leftIdx] >= right[rightIdx]:
            merged.append(left[leftIdx])
            leftIdx += 1
        else:
            merged.append(right[rightIdx])
            rightIdx += 1

    merged += left[leftIdx:]
    merged += right[rightIdx:]

    return merged


list1 = input("Enter a list of numbers separated by spaces: ").split()

list1 = [int(num) for num in list1]
sortedList = mergeSort(list1)

print("Sorted list in descending order:", sortedList)
