def count_elements_frequency(input_list):
    frequency_dict = {}

    for element in input_list:
        # If the element is already in the dictionary, increment its count
        if element in frequency_dict:
            frequency_dict[element] += 1
        # If the element is not in the dictionary, add it with a count of 1
        else:
            frequency_dict[element] = 1

    return frequency_dict

# Example usage:
input_list = [1, 2, 1, 3, 4, 2, 5, 3, 1, 5]
result = count_elements_frequency(input_list)
print(result)
