#method 1
def largest_product(nums):
    dn = list(set(nums))  
    dn.sort(reverse=True)  
    if len(dn) < 2:
        return -1 
    return dn[0] * dn[1]  


us = input()
nums = list(map(int, us.split()))
result = largest_product(nums)
print("Product Of Largest Distinct Numbers:", result)



# Method 2 == with exception handling
'''def largest_product(numbers):
    try:
        distinct_numbers = list(set(numbers))  
        distinct_numbers.sort(reverse=True)
        if len(distinct_numbers) < 2:
            return -1  
        return distinct_numbers[0] * distinct_numbers[1] 
    except ValueError:
        return "Invalid input. Please enter a list of integers."

try:
    user_input = input()
    numbers = list(map(int, user_input.split()))
    result = largest_product(numbers)
    print("Product Of Largest Distinct Numbers:", result)
except ValueError:
    print("Invalid input. Please enter a list of integers.")'''