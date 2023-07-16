#Write a Python function called "calculate_discount" that takes an item's price and a discount percentage as input. Calculate the final price after the discount and return it.

def calculate_discount(price, discount):
    discount_amount = discount / 100
    finalPrice = price * discount_amount
    return finalPrice

price = float(input("Enter the price of the item: "))
discount = int(input("Enter the discount percentage of the item: "))
ans = calculate_discount(price, discount)
print("The price of the item after discount is:", ans)
