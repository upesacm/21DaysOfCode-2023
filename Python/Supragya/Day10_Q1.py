#Q1  Write a Python function called "calculate_discount" that takes an item's price and a discount percentage as input.
#  Calculate the final price after the discount and return it.
def calculate_discount(price,discount):
    discount_price = price*discount/100
    final_price= price-discount_price
    return final_price

price =int(input("Enter the price of the item "))
discount=int(input("Enter the discount percentage "))
final_price=calculate_discount(price,discount)
print("Final price after discount: Rs", final_price)
