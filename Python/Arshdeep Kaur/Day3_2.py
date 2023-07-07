ans = 0

while (True):
    num = int(input("Enter the number: "))
    if (num > 0):
        ans+=num
    else:
        break;

print("The sum of all the positive integers entered is:", ans)
