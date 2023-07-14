sum=0
val=True
while(val):
    a=int(input("Enter a "))
    if a<0:
        print("Total sum of positive a",sum)
        val=False
    sum=sum+a
