def largest_product(nums):
    if len(nums) < 2:
        return -1
    
    max_num = float('-inf')
    second_max = float('-inf')
    
    for num in nums:
        if num > max_num:
            second_max = max_num
            max_num = num
        elif num > second_max and num != max_num:
            second_max = num
    
    if second_max != float('-inf'):
        return max_num * second_max
    else:
        return -1

input_list = list(map(int, input().split()))
result = largest_product(input_list)
print("Product Of Largest Distinct Numbers:",result)
