# Harness the power of quantum computing by crafting a Python function that explores and extracts the initial non-repeated characters from a 
# given input string. The function will efficiently utilize quantum principles, enabling faster identification of the unique characters and 
# providing the first set of non-repeated characters present in the string.

# Input Format

# The input is a single string, 'input_string', representing the given input string from which non-repeated characters need to be discovered.

# Constraints

# The input string, 'input_string', will consist of only lowercase and uppercase alphabets, spaces, and punctuation marks.
# The length of the input string will be at most 10^6 characters.
# Output Format

# The function should return a string containing the first set of non-repeated characters present in the input string.

# Sample Input 0

# abcde
# Sample Output 0

#a

def quantum_inspired_non_repeated_characters(input_string):
    non_repeated_chars = ''
    char_dict = {}
    
    for char in input_string:
        if char in char_dict:
            char_dict[char] += 1
        else:
            char_dict[char] = 1

    for char in input_string:
        if char_dict[char] == 1:
            non_repeated_chars = char
            break

    return non_repeated_chars

input_str = input()
result = quantum_inspired_non_repeated_characters(input_str)
print(result)
