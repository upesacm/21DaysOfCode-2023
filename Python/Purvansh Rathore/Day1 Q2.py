def reverse(statement):
    words = statement.split()  # Split the statement into individual words
    reversed_words = []

    for word in words:
        reversed_word = word[::-1]  # Reverse each word using slicing
        reversed_words.append(reversed_word)

    reversed_statement = " ".join(reversed_words)  # Join the reversed words with spaces

    return reversed_statement


statement = input("Enter a statement: ")
reversed_statement = reverse(statement)
print("Reversed statement: " + reversed_statement)
