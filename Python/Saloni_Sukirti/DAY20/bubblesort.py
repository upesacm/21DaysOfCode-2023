# Python

# 1. Write a Python program that sorts a given list of numbers in ascending order using the
# bubble sort algorithm. Print the sorted list with a descriptive message.

def bubble(numbers):


    for i in range(0,len(numbers)):
        swap = False

        for j in range(1,len(numbers)-i):
            if(numbers[j]<numbers[j-1]):
                temp = numbers[j-1]
                numbers[j-1] = numbers[j]
                numbers[j] = temp
                swap = True
        #print(numbers)

        if swap == False:
            break
    print("The sorted list: ")
    print(numbers)
            


list_number = [12,24,63,49,2]
bubble(list_number)

