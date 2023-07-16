n=int(input("Enter n number of students "))
list1=[]
list2=[]
for i in range(0,n):
    a=str(input("Enter student name "))
    b=int(input("Enter student mark "))
    list1.append(a)
    list2.append(b)
    
for i in range(0,n):
    print(list1[i],':',list2[i])
