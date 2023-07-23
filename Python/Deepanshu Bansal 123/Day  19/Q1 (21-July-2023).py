n=int(input("Enter n number of element in list1 "))
list1=[]
for i in range(0,n):
    val=int(input("Enter val "))
    list1.append(val);
    
a=int(input("Enter a for linear search in list1 "))
flag=0
for i in range(0,n):
    if list1[i]==a:
        flag=1
        print("Element found in list1")
        
if flag==0:
    print("Element not found in list1")    
