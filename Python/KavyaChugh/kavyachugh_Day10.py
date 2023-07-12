#Write a Python function called "calculate_discount" that takes an item's price and a discount percentage as input. Calculate the final price after the discount and return it.

def calculate_discount(price, discount):
    final_price = price - (price * discount / 100)
    return final_price
