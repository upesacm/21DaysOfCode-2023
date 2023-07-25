def isPrime(num):

    if num < 2:
        return False

    if (num == 2):
        return True
    
    for i in range(2, num):
        if num % i == 0:
            return False
        
    return True

def nPrimeNumbers(n):

    count = 0
    num = 2
    primeNumbers = []

    while(count < n):

        if (isPrime(num)):
            primeNumbers.append(num)
            count = count+1
        num = num+1

    return primeNumbers

n = int(input())
ans = nPrimeNumbers(n)
for i in ans:
    print(i, end = " ")
