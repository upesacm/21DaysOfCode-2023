def c_elements(list1, list2):
    common_e = []
    for item in list1:
        if item in list2:
            common_e.append(item)
    return common_e
