def longestCommonPrefix(string):
    
    minLen = min(len(s) for s in string)

    commonPrefix = ""

    for i in range(minLen):
        char = string[0][i]
        if all(s[i] == char for s in string):
            commonPrefix += char
        else:
            break

    return commonPrefix

n = int(input())
stringsList = []

for i in range(n):
    char = input()
    stringsList.append(char)
    
print(longestCommonPrefix(stringsList))
