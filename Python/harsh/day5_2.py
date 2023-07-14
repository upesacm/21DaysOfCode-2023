end = int(input("Enter the ending number: "))
num = 0
i = 0
ctr = 0
for num in range(start,end+1,1):
    ctr = 0
    for i in range(2,num//2,1):
        if num % i == 0 :
            ctr = ctr + 1
            break
    if (ctr==0 and num != 1):
        print(num)                    