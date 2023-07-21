#1. Write a Python function called "calculate_discount" that takes an item's price and a discount percentage as input. Calculate the final price after the discount and return it.
# Define the function
def calculate_discount(price, discount):
    # Calculate the amount of discount
    amount = price * discount / 100
    # Subtract the amount from the original price
    final_price = price - amount
    # Return the final price
    return final_price

# Ask the user for the price and the discount
price = float(input("Enter the original price of the item: ")) # Convert the input to a float
discount = float(input("Enter the discount percentage: ")) # Convert the input to a float

# Call the function with the user input
final_price = calculate_discount(price, discount)

# Print the result
print(f"The final price after {discount}% discount is {final_price}")



#2. Write a Python program that defines a function is_palindrome(word) which takes a string as input and checks if it is a palindrome. A palindrome is a word that reads the same forwards and backward. The function should return True if the word is a palindrome and False otherwise. The program should prompt the user to enter a word and display whether it is a palindrome or not.
def is_palindrome(word):
  # convert the word to lowercase
  word = word.lower()
  # reverse the word
  reversed_word = word[::-1]
  # check if the word and the reversed word are equal
  if word == reversed_word:
    # return True if they are equal
    return True
  else:
    # return False otherwise
    return False

# prompt the user to enter a word
user_word = input("Enter a word: ")
# call the function and store the result
result = is_palindrome(user_word)
# print the result with a descriptive message
if result:
  print(f"{user_word} is a palindrome.")
else:
  print(f"{user_word} is not a palindrome.")
