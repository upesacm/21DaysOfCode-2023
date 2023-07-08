# 2. Write a Python program that finds the second smallest element in a given list
# and displays it with a descriptive message.

a = [2,1,34,5,1,9,3]
a.sort()

mini = a[0]

for i in a:
    if(i>mini):
        print("The second smallest element: ",i)
        break

b = [2,1,34,5,1,9,3]  
mino = min(b)

for i in b:
    if i == mino:
        b.remove(mino)

second_min=min(b)
print("The second smallest element: ",second_min)



    