def c_frequency(li):
    f_dict = {}
    for item in li:
        if item in f_dict:
            f_dict[item] += 1
        else:
            f_dict[item] = 1
    return f_dict
li1 = [1,1,28,8,8,8,8,8]
dictt = c_frequency(li1)
print("Frequency dictionary:", dictt)
