import random
import math
N=int(input("Enter N "))
list1=[]
list2=[]
for i in range(0,N):
    val=random.random()
    list1.append(val);

add=0
for i in range(0,N):
    add=add+list1[i]
    
total=add/N
print("Mean of N random numbers",total)

for i in range(0,N):
    val=list1[i]-total
    val1=val*val
    list2.append(val)
    
sum1=0    
for i in range(0,N):
    sum1=sum1+list2[i]
    
var=sum1/N
print("Standard deviation of N random numbers  sqrt(",var,")")
