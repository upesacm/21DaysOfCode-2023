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


def smallest_element(arr, k):
    if k < 1 or k > len(arr):
        raise ValueError("k should be between 1 and the length of the array.")
    return quickselect(arr, 0, len(arr) - 1, k)

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    result = smallest_element(arr, k)
    print(result)
