# Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message.

n=int(input("Enter number of integers you want in list : "))
int_list=[]

for i in range(n):
    int_list.append(float(input(f"Enter {i+1}th number : ")))

print(f"List input by user is {int_list}")

int_list.sort()

print(f'Second smallest element in list is {int_list[1]}')