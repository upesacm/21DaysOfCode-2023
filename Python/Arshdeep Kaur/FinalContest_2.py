def nonRepeatedChar(input_string):

    charFreq = {}
    
    for char in input_string:
        if char in charFreq:
            charFreq[char] += 1
            
        else:
            charFreq[char] = 1

    for char in input_string:
        if charFreq[char] == 1:
            return char

input_string = input()
print(nonRepeatedChar(input_string))
