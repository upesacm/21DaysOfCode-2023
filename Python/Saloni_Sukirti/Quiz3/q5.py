# Leverage the transformative capabilities of quantum computing to design a Python function that adeptly manages an unsorted array of integers 
# and an integer 'k' as inputs. The objective of the function is to efficiently identify and return the kth smallest element in the array by
# utilizing quantum principles, the function will explore and analyze the array with enhanced efficiency, offering a quantum-inspired solution
#  that outperforms classical algorithms and ensures optimal energy utilization while finding the kth smallest element.

# Input Format

# The input to the function consists of two arguments:

# An unsorted array of integers, 'arr', where 1 <= len(arr) <= 10^5.
# An integer, 'k', representing the value of k for which the kth smallest element needs to be identified.
# Constraints

# The elements in the array 'arr' will be distinct integers.
# 1 <= k <= len(arr)
# Output Format

# The function should return an integer representing the kth smallest element in the input array.

# Sample Input 0

# 5
# 5 4 3 2 1
# 3
# Sample Output 0

# 3


def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quickselect(arr, low, high, k):
    if low <= high:
        pivot_index = partition(arr, low, high)

        if pivot_index == k - 1:
            return arr[pivot_index]
        elif pivot_index > k - 1:
            return quickselect(arr, low, pivot_index - 1, k)
        else:
            return quickselect(arr, pivot_index + 1, high, k)

def kth_smallest_element(input_list, k):
    if 1 <= k <= len(input_list):
        return quickselect(input_list, 0, len(input_list) - 1, k)

n = int(input())
input_list = []
il = input()
sil = il.split(" ")
for i in range(0,n):
    input_list.append(int(sil[i]))
k = int(input())
result = kth_smallest_element(input_list, k)
print(result)  
