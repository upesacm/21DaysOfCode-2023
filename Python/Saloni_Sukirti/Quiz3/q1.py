'''Could you design a Python function that utilizes the principles of quantum computing to generate the first 'n' prime numbers? We aim to optimize
 the efficiency of the prime number identification process while conserving computational resources. Quantum computing offers the potential to
exploit parallelism and explore multiple possibilities simultaneously, enabling faster prime number detection compared to classical algorithms.
Your task is to implement an approach that efficiently calculates the initial 'n' prime numbers using quantum techniques, paving the way for 
faster and more resource-efficient prime number generation.

Input Format

The input is a single integer, 'n', representing the number of prime numbers to be generated.

Constraints

The function should return a list of 'n' prime numbers in ascending order.

Output Format

1 <= n <= 1000 (The value of 'n' will be within this range.)

Sample Input 0

5
Sample Output 0

2 3 5 7 11'''


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def quantum_inspired_prime_numbers(n):
    prime_numbers = []
    candidate = 2

    while len(prime_numbers) < n:
        if is_prime(candidate):
            prime_numbers.append(candidate)
        candidate += 1

    return prime_numbers

n = int(input())
result = quantum_inspired_prime_numbers(n)
print(*result)
