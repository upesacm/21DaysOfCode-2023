#Write a Python program that prints all the prime numbers between two given numbers provided by the user.
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# Get the range of numbers from the user
start = int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))

# Print prime numbers within the range
print("Prime numbers between", start, "and", end, "are:")
for num in range(start, end + 1):
    if is_prime(num):
        print(num)
