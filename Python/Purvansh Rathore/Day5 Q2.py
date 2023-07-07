#DAY 5 Question 2

# Take input from the user
start = int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))

# Create a boolean list to track prime numbers
is_prime = [True] * (end + 1)
is_prime[0] = is_prime[1] = False

# Apply the Sieve of Eratosthenes algorithm
for i in range(2, int(end ** 0.5) + 1):
    if is_prime[i]:
        for j in range(i * i, end + 1, i):
            is_prime[j] = False

# Print prime numbers between start and end
print("Prime numbers between", start, "and", end, "are:")
for num in range(start, end + 1):
    if is_prime[num]:
        print(num)


