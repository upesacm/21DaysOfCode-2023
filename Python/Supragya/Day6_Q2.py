# Q2 Write a Python program that finds the second smallest element in a given 
# list and displays it with a descriptive message.
def find_second_smallest(num_list):
    if len(num_list) < 2:
        return None

    smallest = float('inf')
    second_smallest = float('inf')

    for num in num_list:
        if num < smallest:
            second_smallest = smallest
            smallest = num
        elif num < second_smallest and num != smallest:
            second_smallest = num

    return second_smallest

list1 = input("Enter a list of integers (space-separated): ")
num_list = list(map(int, list1.split()))
second_smallest = find_second_smallest(num_list)

if second_smallest is None:
    print("The list has less than two elements.")
else:
    print("The second smallest element is:", second_smallest)
