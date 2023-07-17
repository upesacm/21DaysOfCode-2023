def fibonacci(n):
    if n <= 0:
        return None
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def main():
    n = 10
    result = fibonacci(n)
    print(f"The {n}th Fibonacci number is: {result}")

if __name__ == "__main__":
    main()
