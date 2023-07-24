#2. Write a Python function called "are_anagrams" that inputs two strings. 
#The function should determine if the two strings are anagrams of each other 
#(i.e., they contain the same characters, but possibly in a different order).
# The function should return True if the strings are anagrams, and False otherwise. Consider case sensitivity and ignore spaces in the strings.

def are_anagrams(str1, str2):
    # Remove spaces and convert both strings to lowercase
    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()

    # Check if the lengths are different, if so, they can't be anagrams
    if len(str1) != len(str2):
        return False

    # Sort the characters in both strings and compare them
    return sorted(str1) == sorted(str2)

# Test the function
string1 = "Listen"
string2 = "Silent"
print(are_anagrams(string1, string2))  # Output: True

string3 = "hello"
string4 = "world"
print(are_anagrams(string3, string4))  # Output: False
