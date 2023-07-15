#1. Write a Python function called "calculate_discount" that takes an item's price and a discount percentage as input. Calculate the final price after the discount and return it.

def calculate_discount(price, discount):
    try:
        final = price - (discount * price / 100)
        print("Discounted price is:", final)
    except ValueError:
        print("Invalid input. Please enter valid numeric values for price and discount.")

price = input("Enter the price: ")
discount = input("Enter the discount percentage: ")

try:
    price = float(price)
    discount = float(discount)
    calculate_discount(price, discount)
except ValueError:
    print("Invalid input. Please enter valid numeric values for price and discount.")

