def non_repeating(str1):
    charcount = {}
    for char in str1:
        charcount[char] = charcount.get(char, 0) + 1

    for char in str1:
        if charcount[char] == 1:
            return char

    return ""
str1 = input()
result = non_repeating(str1)
print(result)
