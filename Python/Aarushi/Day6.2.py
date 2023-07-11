#2. Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message.
n = int(input("Enter the number of elements: "))
m = []
for i in range(n):
    x = int(input("Enter your number: "))
    m.append(x)

# Find the second smallest element
smallest = min(m)  # Find the smallest element
second_smallest = float('inf')  # Set the second smallest to a large value initially

for num in m:
    if num > smallest and num < second_smallest:
        second_smallest = num

print("The second smallest number in the list is:", second_smallest)
