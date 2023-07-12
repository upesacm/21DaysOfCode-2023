n=int(input("Enter n number of students "))
list1=[]
list2=[]
list3=[]
list4=[]
for i in range(0,n):
    a=str(input("Enter student name "))
    b=int(input("Enter student mark of subject-1 "))
    c=int(input("Enter student mark of subject-2 "))
    d=int(input("Enter student mark of subject-3 "))
    list1.append(a)
    list2.append(b)
    list3.append(c)
    list4.append(d)
    
for i in range(0,n):
    val=(list2[i]+list3[i]+list4[i])/3.0
    print(list1[i],':',round(val,2))
    
