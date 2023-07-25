#Write a Python program that sorts a given list of numbers in ascending order using the bubble sort algorithm. Print the sorted list with a descriptive message.

list1 = input("Enter a list of numbers separated by spaces: ").split()
list1 = [int(num) for num in list1]

n = len(list1)
for i in range(n):
     for j in range(0, n-i-1):
          if list1[j] > list1[j+1]:
              list1[j], list1[j+1] = list1[j+1], list1[j]

print("Sorted list in ascending order:", list1)
