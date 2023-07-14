#Write a Python program that takes a list of integers as input from the user and creates two new lists: one containing the even numbers from the input list and another containing the odd numbers. The program should then write these two lists to separate files. The user should enter the filenames for the input and output files.

list1 = []
n = int(input("Enter the length of the list: "))
for i in range(n):
    num = int(input("Enter the number: "))
    list1.append(num)

even = []
odd = []

for i in list1:
    if (i%2 == 0):
        even.append(i)
    else:
        odd.append(i)

print("\n")

print("Even numbers file:")
for i in even:
    print(i)

print("\n")

print("Odd numbers file:")
for i in odd:
    print(i)
