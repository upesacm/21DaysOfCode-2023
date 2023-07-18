def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# Example usage
n = 10
fibonacci_number = fibonacci(n)
print("The", n, "th Fibonacci number is:", fibonacci_number)

