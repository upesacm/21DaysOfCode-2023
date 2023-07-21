def bubble_sort(arr):
    n = len(arr)

    for i in range(n - 1):
        swapped = False

        for j in range(n - 1 - i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

        # If no elements were swapped in the inner loop, the list is already sorted
        if not swapped:
            break

# Example usage:
if __name__ == "__main__":
    numbers = [64, 34, 25, 12, 22, 11, 90]
    
    print("Original list:", numbers)
    bubble_sort(numbers)
    print("Sorted list in ascending order:", numbers)
