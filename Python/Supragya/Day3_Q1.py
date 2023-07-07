#Q1 Write a Python program that takes three numbers as input and prints the maximum of the three.
a=int(input("Enter the value of first number "))
b=int(input("Enter the value of second number "))
c=int(input("Enter the value of third number "))
if a != b and b != c and c != a:
    if a > b:
        if a > c:
            print(f"a = {a} is the biggest number")
        else:
            print(f"c = {c} is the biggest number")
    else:
        if b > c:
            print(f"b = {b} is the biggest number")
        else:
            print(f"c = {c} is the biggest number")
elif a != b or b != c or c != a:
    if a == b and (b > c or b < c):
        if b > c:
            print(f"a = {a} and b = {b} are equal and greater than c = {c}")
        else:
            print(f"a = {a} and b = {b} are equal but c = {c} is greater than both")
    if b == c and (c > a or c < a):
        if c > a:
            print(f"c = {c} and b = {b} are equal and greater than a = {a}")
        else:
            print(f"c = {c} and b = {b} are equal but a = {a} is greater than both")
    if a == c and (c > b or c < b):
        if c > b:
            print(f"a = {a} and c = {c} are equal and greater than b = {b}")
        else:
            print(f"a = {a} and c = {c} are equal but b = {b} is greater than both")
else:
    print("All numbers are the same")
