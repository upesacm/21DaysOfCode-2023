def max_palindrome_string(s):
    max_palindrome = ""
    max_length = 0

    for i in range(len(s)):
        palindrome_odd = expand_around_center(s, i, i)  
        palindrome_even = expand_around_center(s, i, i+1)  

        if len(palindrome_odd) > max_length:
            max_palindrome = palindrome_odd
            max_length = len(palindrome_odd)

        if len(palindrome_even) > max_length:
            max_palindrome = palindrome_even
            max_length = len(palindrome_even)


    print(max_palindrome)


def expand_around_center(s, left, right):
    
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1

    return s[left+1:right]

str1 = input()
max_palindrome_string(str1)
