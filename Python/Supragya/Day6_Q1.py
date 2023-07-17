# Q1 Write a function that accepts a list of integers and returns the largest number from the list.
def largest_number(list):
    if len(list)==0:
        return None
    max =list[0]
    for i in list:
        if(i>max):
            max=i
    return max
list1 = input("Enter a list of integers (space-separated): ")
list1 = list(map(int, list1.split()))
max = largest_number(list1)
print("The largest number is:", max)
