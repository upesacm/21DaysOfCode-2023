'''
As a member of the Chandrayaan mission team, you have been assigned the task of developing a function to process a given string denoted as 's'. The objective is to identify the longest contiguous palindromic substring present within 's'. The function should print this substring after finding it. If 's' itself is a palindromic string, it would be considered the longest palindromic substring. It is important to note that a string can have multiple palindromic substrings of the same length. For example, the string 'babad' has two palindromic substrings of length 3: 'bab' and 'aba'. In cases where there are multiple longest palindromic substrings, your solution should return the one that appears first in the input string. For example, for the input string 'babad', your solution should return 'bab' instead of 'aba'. This analysis of palindromic substrings is vital for extracting valuable information from the input string, contributing to our understanding of the lunar data collected during the Chandrayaan mission.

Input Format

The function max_palindrome_string should accept a string s as input.

Constraints

The length of the input string s will not exceed 1000 characters.
The input string s can contain alphanumeric characters and special symbols.
The function should handle and print the correct longest palindromic string for all valid input strings.
Output Format

The function should print the longest contiguous palindromic string found in s.

Sample Input 0

babad    
Sample Output 0

bab
'''
def max_palindrome(s):
    def center(l, r):
        while l >= 0 and r < len(s) and s[l] == s[r]:
            l -= 1
            r += 1
        return s[l + 1:r]

    longest_palindrome = ""
    for i in range(len(s)):
        palindrome_odd = center(i, i)
        if len(palindrome_odd) > len(longest_palindrome):
            longest_palindrome = palindrome_odd

        palindrome_even =center(i, i + 1)
        if len(palindrome_even) > len(longest_palindrome):
            longest_palindrome = palindrome_even

    return longest_palindrome

string = input()
print(max_palindrome(string))

