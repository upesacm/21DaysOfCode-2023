print("Enter your range to find the prime number in between")
a=int(input("Enter your first number:"))
b=int(input("Enter your second number:"))

while a<b: 
    flag=0
    for i in range (2,a):
        if (a%i == 0):
            flag=1
            break

    if(flag==0):
        print(a)
    a+=1
