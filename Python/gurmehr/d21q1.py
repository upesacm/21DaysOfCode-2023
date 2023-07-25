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

def main():
    # Get input from the user
    start = int(input("Enter the starting number: "))
    end = int(input("Enter the ending number: "))

    # Call fizzbuzz_range to generate the list
    result_list = fizzbuzz_range(start, end)

    # Print the resulting list
    print(result_list)

if __name__ == "__main__":
    main()
