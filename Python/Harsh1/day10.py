'''Write a Python function called "calculate_discount" that takes an item's =price and a discount percentage as input. Calculate the final price after the discount and return it.'''

#sol
def calculate_discount(price, discount):
    return (price*discount)/100

try:
    price=int(input('Enter price of product:'))
    discount=int(input('Enter discount on product in percentage:'))
    print(f'Final Price after discount is {calculate_discount(price, discount)}')
except ValueError:
    print('Enter Valid Input')

'''2. Write a Python program that defines a function is_palindrome(word) which takes a string as input and checks if it is a palindrome. A palindrome is a word that reads the same forwards and backward.
The function should return True if the word is a palindrome and False otherwise. The program should prompt the user to enter a word and display whether it is a palindrome or not.'''

#sol
import string
def is_palindrome(word):
    word=word.lower()
    length=len(word)
    a=int(length//2)
    for i in range(0,a):
        if word[i]!=word[-i-1]:
            return False
    else:return True
    
n=input('Enter the word:')
if is_palindrome(n) is True:
    print(f'{n} is palindrone')
else:
    print(f'{n} is not palindrone')
