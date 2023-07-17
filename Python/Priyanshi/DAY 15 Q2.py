def fib(n):
    if n <= 0:
        return "Invalid input"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)
n = 10
fib_n = fib(n)
print("The",n,"th Fibonacci number is:", fib_n)
