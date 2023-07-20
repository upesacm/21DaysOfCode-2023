#Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.
def count(s):
    w= s.split()
    return len(w)
s= input("Enter a sentence: ")
print(count(s))
