#Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message
def second_smallest(list):
    sm = list[0]
    sec_sm = list[1]
    for num in list:
        if num < sm:
            sm = num
        if num < sec_sm and num > sm:
            sec_sm = num
    return sec_sm
list = []
n = int(input("Enter number of elements : "))
for i in range(0, n):
    element = int(input())
    list.append(element)
print("Second smallest number is: ", second_smallest(list))
