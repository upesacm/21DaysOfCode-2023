#2. Write a Python program that prints all the prime numbers between two given numbers provided by the user.
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

start = int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))

print("Prime numbers between", start, "and", end, "are:")

for number in range(start, end + 1):
    if is_prime(number):
        print(number)
