# Explore the revolutionary realm of quantum computing as you design a Python function that delves into a list of strings to uncover and 
#retrieve the longest common prefix shared by all the elements. Embracing quantum principles, this function will unleash the power of 
#parallelism, allowing for an optimized exploration of the input strings. By efficiently harnessing quantum techniques, the function 
#will swiftly and accurately identify the longest common prefix, providing a cutting-edge solution that surpasses classical methods 
#in both speed and effectiveness.

# Input Format

# The input is a single string, 'input_string', representing the given input string from which non-repeated characters need to be discovered.

# Constraints

# The input string, 'input_string', will consist of only lowercase and uppercase alphabets, spaces, and punctuation marks.
# The length of the input string will be at most 10^6 characters.
# Output Format

# The function should return a string containing the first set of non-repeated characters present in the input string.

# Sample Input 0

# 3
# flower
# flow
# flight
# Sample Output 0

# fl

def prefix_string(n):
    li = []
    a = ""
    for i in range(0,n):
        l= input()
        li.append(l)
        #print(l)
        
    if not li or len(li) == 0:
        return ""

    longest_prefix = ""

    min_length = min(len(s) for s in li)

    for i in range(min_length):
        characters = [s[i] for s in li]

        if all(char == characters[0] for char in characters):
            longest_prefix += characters[0]
        else:
            break

    return longest_prefix

n = int(input())
print(prefix_string(n))