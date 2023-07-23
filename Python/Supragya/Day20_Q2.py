# Q2 Implement the merge sort algorithm in Python to sort a given list of numbers in descending order. 
# Display the sorted list with a descriptive message. 
def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] > right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

def main():
    numbers = []
    n = int(input("Enter the number of elements: "))
    for i in range(n):
        num = int(input(f"Enter element {i+1}: "))
        numbers.append(num)

    print("Original list:", numbers)
    merge_sort(numbers)
    print("Sorted list (Descending Order):", numbers)

if __name__ == "__main__":
    main()
