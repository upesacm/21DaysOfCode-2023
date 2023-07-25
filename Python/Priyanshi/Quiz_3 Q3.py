def lc_prefix(strings):
    if not strings:
        return ""
    prefix = strings[0]
    for string in strings[1:]:
        i = 0
        while i < len(prefix) and i < len(string) and prefix[i] == string[i]:
            i += 1
        prefix = prefix[:i]
    return prefix
def ii():
    n = int(input())
    input_strings = []
    for i in range(n):
        string = input()
        input_strings.append(string)
    return input_strings
inputtt= ii()
result = lc_prefix(inputtt)
print(result)
