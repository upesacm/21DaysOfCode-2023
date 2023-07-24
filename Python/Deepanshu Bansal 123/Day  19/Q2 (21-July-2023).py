n=int(input("Enter n number of element in list1 "))
list1=[]
for i in range(0,n):
    val=int(input("Enter val "))
    list1.append(val);
beg=0
end=n-1
a=int(input("Enter a for binary search in sorted list1 "))
flag=0
while beg<=end:
    mid=int((beg+end)/2)
    if list1[mid]==a:
        flag=1
        print("a found in list1 at index",mid)
        break
    elif list1[mid]>a:
        end=mid-1
    else:
        beg=mid+1
        
if flag==0:
    for i in range(0,n):
        if list1[i]>a:
            print("a not found in list1")
            print("a should be inserted at index",i,"in list1")
            break
