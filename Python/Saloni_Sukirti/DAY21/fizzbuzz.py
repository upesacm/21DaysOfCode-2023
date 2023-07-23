# Python

# 1. Write a Python function called "fizzbuzz_range" that takes two integers start and end as input. 
#The function should generate and return a list of strings representing the numbers from start to end.
# However, replace multiples of 3 with "Fizz", multiples of 5 with "Buzz", and multiples of both 3 and
# 5 with "FizzBuzz". If the number doesn't meet any of these conditions, simply include the number itself in the list.



def fizzbuzz_range(start, end):
    result = []
    for num in range(start, end + 1):
        if num % 3 == 0 and num % 5 == 0:
            result.append("FizzBuzz")
        elif num % 3 == 0:
            result.append("Fizz")
        elif num % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(num))
    return result

# Test the function
start_number = 1
end_number = 20
result_list = fizzbuzz_range(start_number, end_number)
print(result_list)
