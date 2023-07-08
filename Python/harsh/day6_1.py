def large(l1):
    return max(l1)

print("enter numbers")
num=list(map(int,input("enter numbers").split(",")))
var=large(num)
print("max of var is",var)
