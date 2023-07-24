n=int(input("enter n items for purchase "))
list1=[]
a=0
sum=0
while(a<n):
    val=int(input("Enter item price "))
    val1=int(input("Enter discount percentage "))
    origprice=(val1*val)/100;
    original=val-origprice
    list1.append(original)
    a=a+1
    
for i in range(0,n):
    sum=sum+list1[i]
    print("Item",i+1,"price",list1[i])
    
print("Total price of all items after discount",sum)    
