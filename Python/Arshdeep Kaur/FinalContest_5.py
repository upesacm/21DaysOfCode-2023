def kthSmallestElement(arr, k):
    sortedArr = sorted(arr)
    return sortedArr[k - 1]

n = int(input())
arr = input().split()
    
k = int(input())

print(kthSmallestElement(arr, k))
