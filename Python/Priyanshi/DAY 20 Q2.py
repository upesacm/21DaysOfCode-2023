def merge_sort_desc(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr) // 2
    left_half = arr[:mid]
    right_half = arr[mid:]
    left_half = merge_sort_desc(left_half)
    right_half = merge_sort_desc(right_half)
    return merge_desc(left_half, right_half)
    
def merge_desc(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] > right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result += left[i:]
    result += right[j:]
    return result
    
numbers = [64, 34, 25, 12, 22, 11, 90]
sortedd= merge_sort_desc(numbers)
print("Sorted list in descending order:", sortedd)
