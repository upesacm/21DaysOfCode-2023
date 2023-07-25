def countFrequency(list1):
    
    frequency = {}
    
    for item in list1:
        if item in frequency:
            frequency[item] += 1
            
        else:
            frequency[item] = 1

    return frequency

num = int(input())

list1 = input().split()

ans = countFrequency(list1)

for i in ans:
    print(i + ": ", end = "")
    print(ans[i])
