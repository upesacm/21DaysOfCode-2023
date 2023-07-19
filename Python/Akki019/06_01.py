# Write a function that accepts a list of integers and returns the largest number from the list.


def largest(int_list):
    largest=int_list[0]
    for i in int_list:
        if i>largest:
            largest=i
        
    return largest


n=int(input("Enter number of integers you want in list : "))
int_list=[]

for i in range(n):
    int_list.append(int(input(f"Enter {i+1}th number : ")))

print(f"List input by user is {int_list}")

print(f"Largest element in list is {largest(int_list)}")