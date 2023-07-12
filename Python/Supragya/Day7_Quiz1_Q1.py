def sortlist(list1):
    sorted_list = sorted(list1)
    new_list = []
    for num in sorted_list:
        if num not in new_list:
            new_list.append(num)
    return new_list

input_list = input()
input_list = input_list.split()
list1 = [int(num) for num in input_list]
result = sortlist(list1)
print("The Sorted Non-Duplicate List:", result)
