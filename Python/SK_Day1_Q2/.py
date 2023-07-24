#Q2 : Write a Python program that takes a sentence as input and prints the reverse of each word in the sentence. For example, if the input is "Hello World!", the output should be "olleH dlroW!".
print("Welcome to Text Reverser Machine!!")
string = input("Please enter the text that you would like to reverse : ")   #text entered by the user
reverse = string[::-1]   # how to reverse this text
print("The reversed text is : {}".format(reverse))  #print the reversed text
