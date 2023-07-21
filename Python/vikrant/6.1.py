import numpy as np
a_len = int(input("Length of the list"))
a_list = []

b_list = []
for i in range(a_len):
    a = int(input("Enter the integer to append: "))
    a_list.append(a)

arr = np.array(a_list)
num = arr.max()
print(num)
