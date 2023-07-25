# Q1 Write a Python program that sorts a given list of numbers in ascending order using the bubble sort algorithm. 
# Print the sorted list with a descriptive message.
def bubble_sort(arr):
    n = len(arr)

    for i in range(n):
        swapped = False
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if not swapped:
            break

def main():
    numbers = []
    n = int(input("Enter the number of elements: "))
    for i in range(n):
        num = int(input(f"Enter element {i+1}: "))
        numbers.append(num)

    print("Original list:", numbers)
    bubble_sort(numbers)
    print("Sorted list:", numbers)

if __name__ == "__main__":
    main()
