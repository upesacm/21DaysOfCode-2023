# 2. Implement the merge sort algorithm in Python to sort a given list of numbers in
# descending order. Display the sorted list with a descriptive message. 

def merge_sort_descending(numbers):
    if len(numbers) > 1:
        mid = len(numbers) // 2
        left_half = numbers[:mid]
        right_half = numbers[mid:]

        merge_sort_descending(left_half)
        merge_sort_descending(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] >= right_half[j]:
                numbers[k] = left_half[i]
                i += 1
            else:
                numbers[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            numbers[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            numbers[k] = right_half[j]
            j += 1
            k += 1

list_numbers = [1, 9, 3, 6, 12, 0]
merge_sort_descending(list_numbers)
print("Sorted list in descending order:", list_numbers)
