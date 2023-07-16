#  Write a Python program that takes three numbers as input and prints the maximum of the three.
a=int(input("Enter num : "))
b=int(input("Enter num : "))
c=int(input("Enter num : "))
if a>b:
    if a>c:
        print(a)
    else:
        print(c)
else:
    if b>c:
        print(b)
    else:
        print(c)