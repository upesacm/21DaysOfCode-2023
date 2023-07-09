def fun(num):
    num.remove(max(num))
    return max(num)
num=list(map(int,input("enter numbers").split(",")))
print("list entered is ",num)
var=fun(num)
print("second max number is ",var)