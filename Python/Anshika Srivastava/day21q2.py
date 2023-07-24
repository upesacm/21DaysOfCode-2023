'''Write a Python function called "are_anagrams" that inputs two strings. 
The function should determine if the two strings are anagrams of each other (i.e., they contain the same characters, but possibly in a different order). 
The function should return True if the strings are anagrams, and False otherwise. Consider case sensitivity and ignore spaces in the strings. '''

def are_anagrams(str1, str2):
    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()
    return sorted(str1) == sorted(str2)

str1 = input("Enter the first string\n ")
str2 = input("Enter the second string\n ")
result = are_anagrams(str1, str2)
print("Are the strings anagrams?", result)
