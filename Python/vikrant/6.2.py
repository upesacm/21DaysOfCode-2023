list1 = []
list_len = int(input("Enter the length of the list: "))
for i in range(list_len):
    a = int(input("Enter the integer to append: "))
    list1.append(a)

list1.sort()
print(list1[-2])