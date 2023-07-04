def Check(num):
    if num % 2 == 0:
        return True

    return False


number = int(input("Enter a number : "))

if Check(number):
    print("Even")
else:
    print("Odd")
