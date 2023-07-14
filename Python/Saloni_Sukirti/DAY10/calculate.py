# Python

# 1. Write a Python function called "calculate_discount" that takes an item's price and
# a discount percentage as input. Calculate the final price after the discount and 
# return it.

def calculate_discount(price, discount_percentage):
    discount_amount = price * (discount_percentage / 100)
    final_price = price - discount_amount
    return final_price

price = int(input("Enter Item price: "))
discou = int(input("Enter discount percentage: "))

print(calculate_discount(price,discou))