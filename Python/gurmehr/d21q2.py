def are_anagrams(str1, str2):
    # Remove spaces and convert strings to lowercase
    str1_cleaned = str1.replace(" ", "").lower()
    str2_cleaned = str2.replace(" ", "").lower()

    # Check if the lengths are different
    if len(str1_cleaned) != len(str2_cleaned):
        return False

    # Count the occurrences of each character in both strings
    char_count1 = {}
    char_count2 = {}

    for char in str1_cleaned:
        char_count1[char] = char_count1.get(char, 0) + 1

    for char in str2_cleaned:
        char_count2[char] = char_count2.get(char, 0) + 1

    # Check if the character counts are the same for both strings
    return char_count1 == char_count2

def main():
    # Get input from the user
    str1 = input("Enter the first string: ")
    str2 = input("Enter the second string: ")

    # Call are_anagrams to check if the strings are anagrams
    if are_anagrams(str1, str2):
        print("The strings are anagrams.")
    else:
        print("The strings are not anagrams.")

if __name__ == "__main__":
    main()
