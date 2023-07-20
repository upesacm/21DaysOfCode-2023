#2. Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.
str=input("enter your string:")
str=str.replace(" ","")
str=str.lower()
x=list(set(str))
x.sort()
x="".join(x)
alpha="abcdefghijklmnopqrstuvwxyz"
if (x==alpha):
    print("the string is a pangram.")
else:
    print("the string is not  a pangram.")
