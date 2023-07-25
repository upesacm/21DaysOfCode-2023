def primess(n):
    def soe(limit):
        sieve = [True] * (limit + 1)
        sieve[0], sieve[1] = False, False
        for num in range(2, int(limit**0.5) + 1):
            if sieve[num]:
                for multiple in range(num * num, limit + 1, num):
                    sieve[multiple] = False
        return [num for num in range(limit + 1) if sieve[num]]
    if n <= 0:
        return []
    elif n == 1:
        return [2]
    limit = 2
    primes = []
    while len(primes) < n:
        primes = soe(limit)
        limit *= 2
    return primes[:n]
n = int(input())
result = primess(n)
print(" ".join(str(prime) for prime in result))

