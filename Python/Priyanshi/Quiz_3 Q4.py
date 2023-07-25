def res(input_list):
    frequency_dict = {}
    for element in input_list:
        if element in frequency_dict:
            frequency_dict[element] += 1
        else:
            frequency_dict[element] = 1
    return frequency_dict
def ii():
    n = int(input())
    input_string = input()
    input_list = list(map(int, input_string.split()))
    return input_list
inputtt =ii()
result_dict = res(inputtt)
for key, value in result_dict.items():
    print(f"{key}: {value}")
