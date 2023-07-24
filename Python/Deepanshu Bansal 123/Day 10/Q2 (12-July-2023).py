string=str(input("Enter string for check palindrome or not: "))
a=str()
i=len(string)-1
while i>=0:
    a=a+string[i]
    i=i-1

if string==a:
    print("String is palindrome")
else:
    print("String is not palindrome")
