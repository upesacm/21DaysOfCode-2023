n1 = int(input("Enter the number: "))
n2 = int(input("Enter the number: "))

prime_num = []

for r in range(n1, n2+1):
    
    count = 0
    for p in range(2, r):
        if r % p == 0:
            count += 1
            break

    if (count==0):
        prime_num.append(r)


for i in prime_num:
    print(i)
    
