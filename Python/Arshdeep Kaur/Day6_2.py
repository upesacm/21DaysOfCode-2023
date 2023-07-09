#Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message.

list1 = []
n = int(input("Enter the number of numbers you want to enter: "))
for i in range(n):
    num = int(input("Enter the number: "))
    list1.append(num)

smallest = list1[0]
for i in list1:
    if (i < smallest):
        smallest = i

sec_smallest = list1[0]
for i in list1:
    if (i < sec_smallest and i != smallest):
        sec_smallest = i

print("The second smallest element of the list is: ", sec_smallest)
