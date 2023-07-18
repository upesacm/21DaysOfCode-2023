def common(li1, li2):
    common_e= list(set(li1) & set(li2))
    return common_e
print(common([1, 2, 3, 4, 5], [4, 5, 6, 7, 8]))
