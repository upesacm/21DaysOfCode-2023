#Write a Python program that prompts the user to enter their name and then prints a greeting message in the format "Hello, {Your Name}!".

#sol-
name=input('Enter the name:')
print(f'Hello, {name}')

#Write a Python program that takes a sentence as input and prints the reverse of each word in the sentence. For example, if the input is "Hello World!", the output should be "olleH dlroW!".

#sol-
sentence=input('Enter the sentence:')
length=len(sentence)
for i in range(1,length+1):
    print(sentence[-i], end='')
