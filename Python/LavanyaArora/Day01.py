#Write a Python program that takes a sentence as input and prints the reverse of each word in the sentence. For example, if the input is "Hello World!", the output should be "olleH dlroW!
def rev(s):
    w= s.split()
    rev_w= [word[::-1] for word in w]
    return ' '.join(rev_w)
s= input("Enter a sentence: ")
print(rev(s))
