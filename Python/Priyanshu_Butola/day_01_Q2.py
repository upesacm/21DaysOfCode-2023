string = input("Enter a sentence:\n")

words = string.split()

for word in words:
    print(word[::-1], end=" ")
