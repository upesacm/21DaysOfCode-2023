def res(input_string):
    charc= {}
    charo = []
    for char in input_string:
        charc[char] = charc.get(char, 0) + 1
        charo.append(char)
    while charo:
        char = charo.pop(0)
        if charc[char] == 1:
            return char
    return None 
inputtt = input()
result = res(inputtt)
print(result) 
