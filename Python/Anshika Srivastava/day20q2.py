#Merge Sort descending order
def mergeSort(arr, descending=True):
    result = []  
    if len(arr) == 1:
        return arr  
    mid = len(arr) // 2  
    left_part = mergeSort(arr[:mid], descending)  
    right_part = mergeSort(arr[mid:], descending)  
    x, y = 0, 0
    while x < len(left_part) and y < len(right_part):
        if descending:
            if left_part[x] < right_part[y]:  # Change the comparison for descending order
                result.append(right_part[y])
                y += 1
            else:
                result.append(left_part[x])
                x += 1
        else: 
            if left_part[x] > right_part[y]:  # Keep the original comparison for ascending order
                result.append(right_part[y])
                y += 1
            else:
                result.append(left_part[x])
                x += 1
    result += left_part[x:]
    result += right_part[y:]
    return result
  
input_list = input("Enter a list of numbers separated by spaces: ").split()
input_list = [int(num) for num in input_list]
sorted_list = mergeSort(input_list, descending=True)
print("Sorted list in descending order:", sorted_list)
