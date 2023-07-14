#Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. The program should then terminate and compute and print the sum of all the positive integers entered by the user.
def sum():
    s=0
    while True:
        n= int(input("Enter a number: "))
        if n<0:
            break
        s+=n
    return s
print(sum())
