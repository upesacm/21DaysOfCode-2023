a=int(input("Enter a"))
b=int(input("Enter b"))
c=int(input("Enter c"))
if a>b:
    if a>c:
        print("a is greater")
    else:
        print("c is greater")
else:
    if b>a:
        if b>c:
            print("b is greater")
        else:
            print("c is greater")
