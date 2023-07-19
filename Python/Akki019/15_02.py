# Write a recursive Python function to calculate the nth Fibonacci number. 
# Test the function by finding the 10th Fibonacci number and display it with a descriptive message.


def fibonacci(num):
    if num==1:
        return 0
    elif num==2:
        return 1
    else:
        return fibonacci(num-1)+fibonacci(num-2)
    
print(fibonacci(10))
