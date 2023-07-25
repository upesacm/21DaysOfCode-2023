def frequency(input_list):
    frequency_dict = {}
    for element in input_list:
        frequency_dict[element] = frequency_dict.get(element, 0) + 1
    return frequency_dict
if __name__ == "__main__":
    n = int(input())
    input_list = list(map(int, input().split()))
    result = frequency(input_list)
    for key, value in result.items():
        print(f"{key}: {value}")
