def binarysearch(arr,x):
    left=0
    right=len(arr)-1
    iteration=0
    
    while left<=right:
        iteration +=1
        mid=(left+right)//2
        if x == arr[mid]:
            return mid 
        elif x <arr[mid]:
            right = mid-1
        else:
            left =mid+1
    return -1

arr=[1,2,3,5,6,64,77,97,676,743]
x=67
result=binarysearch(arr,x)
if (result!=-1):
    print("Element",x,"found on the index ",result)
else:
    
    print("Element not found ",)