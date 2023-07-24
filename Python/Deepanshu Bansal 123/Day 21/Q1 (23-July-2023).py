a=int(input("Enter a start number "))
b=int(input("Enter b end number "))
list1=[]
c=a
for i in range(c,b+1):
    if i%3==0 and i%5!=0:
        val1="Fizz"
        list1.append(val1)
    elif i%3!=0 and i%5==0:
        val2="Buzz"
        list1.append(val2)
    elif i%3==0 and i%5==0:
        val3="FizzBuzz"
        list1.append(val3)
    else:
        list1.append(i)

print("list1 for multiply of 3,5,and both ")
for i in range(0,len(list1)):
    print(list1[i])
