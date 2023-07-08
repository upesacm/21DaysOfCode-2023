#1. Write a function that accepts a list of integers and returns the largest number from the list.
def maximum(numbers):
    if len(numbers)==0:
        return None
    max_number = numbers[0]

    for number in numbers:
        if number> max_number:
            max_number = number
    
    return max_number

n= int(input("enter the number of elements:"))
m=[]
for i in range (n):
    x=int(input("Enter your number:"))
    m.append(x)

print("Maximum element is:",maximum(m))


