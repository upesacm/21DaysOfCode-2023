#sol1-
def is_prime(n):
    list1=[]
    n1=2
    while len(list1)<n:
        is_prime = True
        for i in range(2, int(n1 ** 0.5) + 1):
            if n1 % i == 0:
                is_prime = False
                break
        if is_prime:
            list1.append(n1)
        n1 += 1

    return list1

n=int(input())
result=is_prime(n)
result1=" ".join(map(str, is_prime(n)))
print(result1)

#sol3
def common_characters(list1, n):
    cs=set(list1[0])
    for cs1 in list1:
        cs = cs.intersection(set(cs1))
    return cs

n=int(input())
list1=[]
for i in range(n):
    a=input()
    list1.append(a)

result=common_characters(list1, n)
result1="".join(result)
print(result1)

#sol4
n=int(input())
list1=[]
a=input().split()
list1=list(map(str, a))
dictionary={}

for number in list1:
    if number in dictionary:
        dictionary[number]+=1
    else:
        dictionary[number]=1

result=dictionary
result1="\n".join(f'{key}: {value}' for key, value in dictionary.items())
print(result1)
