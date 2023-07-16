arr = []

while True:

    num = int(input("Enter a number: "))

    if num<0:
        break
    else:
        arr.append(num)

sum = 0

for i in arr:
    sum = sum + i

print(f"The sum of positive number is {sum}")
