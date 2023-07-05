sum=0
while True:
    x=int(input("Enter positive number:"))
    if x>=0:
        sum+=x
        x=0
    elif x<0:
        break
print("sum of positive numbers entered=",sum)
