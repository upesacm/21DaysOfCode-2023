# 2. Write a recursive Python function to calculate the nth Fibonacci number.
# Test the function by finding the 10th Fibonacci number and display it with a descriptive message.

def fibonacci(n):
    
    if n < 2:
        return n

    return(fibonacci(n-1) + fibonacci(n-2))  

number = int(input("Enter the number: "))

print("The Fibonacci numbers are: ")
for i in range(number):
    print(fibonacci(i))


