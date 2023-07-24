def check_even_odd(num):
    if num % 2 == 0:
        return "Even"
    else:
        return "Odd"

num = int(input("Enter an integer: "))
result = check_even_odd(num)
print(f"The number {num} is {result}.")

