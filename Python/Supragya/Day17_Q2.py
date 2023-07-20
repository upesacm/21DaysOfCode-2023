# Q2 Write a Python program to count the frequency of each element in a list and return a dictionary
# with the elements as keys and their frequencies as values.
def count_frequency(input_list):
    frequency_dict = {}
    for element in input_list:
        frequency_dict[element] = frequency_dict.get(element, 0) + 1
    return frequency_dict
input_list = input("Enter elements of the list separated by spaces: ").split()
result = count_frequency(input_list)
print("Frequency dictionary:", result)
