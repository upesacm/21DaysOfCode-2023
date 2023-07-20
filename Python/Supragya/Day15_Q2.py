# Q2 Write a recursive Python function to calculate the nth Fibonacci number. 
# Test the function by finding the 10th Fibonacci number and display it with a descriptive message.
def fibonacci(n):
    if n <= 0:
        return "Invalid input. Nth Fibonacci number is defined for n >= 1."
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
n = int(input("Enter the value of 'n' to find the nth Fibonacci number: "))
result = fibonacci(n)
print(f"The {n}th Fibonacci number is: {result}")
