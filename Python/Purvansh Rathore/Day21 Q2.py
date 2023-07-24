def are_anagrams(str1, str2):
    # Remove spaces and convert both strings to lowercase for case-insensitive comparison
    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()

    # Check if the sorted strings are equal
    return sorted(str1) == sorted(str2)

# Example usage:
string1 = "Listen"
string2 = "Silent"
result = are_anagrams(string1, string2)
print(result)  # Output: True
