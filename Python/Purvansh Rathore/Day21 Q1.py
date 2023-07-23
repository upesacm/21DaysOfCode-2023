def fizzbuzz_range(start, end):
    if start > end:
        return []  # Return an empty list if the start is greater than the end

    result = []
    for num in range(start, end + 1):
        if num % 3 == 0 and num % 5 == 0:
            result.append("FizzBuzz")
        elif num % 3 == 0:
            result.append("Fizz")
        elif num % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(num))  # Convert the number to string and append

    return result

# Example usage:
start_number = 1
end_number = 20
result_list = fizzbuzz_range(start_number, end_number)
print(result_list)
