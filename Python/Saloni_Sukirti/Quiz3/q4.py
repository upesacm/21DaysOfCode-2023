# Employ the revolutionary capabilities of quantum computing to create a Python function that optimally handles a 
#list of data elements and generates a dictionary with the frequency of each unique element present in the list. 
#By leveraging quantum principles, this function will explore the list with increased efficiency, enabling faster
# processing and a more effective outcome compared to traditional classical algorithms. The function will 
#efficiently harness quantum techniques to identify and count the occurrences of each distinct element, culminating 
#in a cutting-edge solution that maximizes computational resources and provides accurate frequency information.

# Input Format

# The input is a list of data elements, 'input_list', for which the frequency of each unique element needs to be calculated.

# Constraints

# The 'input_list' will contain at least one element and at most 10^6 elements.
# The elements in the 'input_list' can be of any data type, including integers, floats, strings, etc.
# Output Format

# The function should return a dictionary containing the frequency of each unique element in the input list.

# Sample Input 0

# 5
# 1 2 2 3 3
# Sample Output 0

# 1: 1
# 2: 2
# 3: 2

def quantum_inspired_frequency(input_list):
    frequency_dict = {}

    for item in input_list:
        item_hashable = str(item)  
        if item_hashable in frequency_dict:
            frequency_dict[item_hashable] += 1
        else:
            frequency_dict[item_hashable] = 1

    return frequency_dict

n = int(input())
input_list = input().split()

result = quantum_inspired_frequency(input_list)

for key, value in result.items():
    print(f"{key}: {value}")