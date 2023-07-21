def longest_palindromic_substring(s):
    if len(s) < 2:
        return s
    
    start = 0
    max_len = 1
    
    for i in range(len(s)):
        # Check for odd-length palindromes
        left = i - 1
        right = i + 1
        while left >= 0 and right < len(s) and s[left] == s[right]:
            if right - left + 1 > max_len:
                start = left
                max_len = right - left + 1
            left -= 1
            right += 1
        
        # Check for even-length palindromes
        left = i
        right = i + 1
        while left >= 0 and right < len(s) and s[left] == s[right]:
            if right - left + 1 > max_len:
                start = left
                max_len = right - left + 1
            left -= 1
            right += 1
    
    return s[start:start+max_len]


# Example usage
input_string = input("Enter a string: ")
result = longest_palindromic_substring(input_string)
print("Longest palindromic substring:", result)
