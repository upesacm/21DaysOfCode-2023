def largest_product(nos):
    li= list(set(nos))
    if len(li) < 2:
        return -1
    li.sort()
    return li[-1] * li[-2]
li1 = input()
elements = li1.split()
nos = []
for element in elements:
    if element.isdigit() or (element.startswith('-') and element[1:].isdigit()):
        nos.append(int(element))
    else:
        exit()
res= largest_product(nos)
print("Product Of Largest Distinct Numbers:", res)
