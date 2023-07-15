text = input("Enter the string: ")
list1 = text.split(" ")
for i in list1:
    temp = i[::-1]
    print (temp, end=" ")
