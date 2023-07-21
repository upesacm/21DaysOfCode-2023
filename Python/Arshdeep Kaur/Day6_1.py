#Write a function that accepts a list of integers and returns the largest number from the list.

list1 = []
n = int(input("Enter the number of numbers you want to enter: "))
for i in range(n):
    num = int(input("Enter the number: "))
    list1.append(num)
print("The largest number from the list is:", max(list1))
