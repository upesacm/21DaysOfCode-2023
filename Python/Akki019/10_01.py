# Write a Python function called "calculate_discount" that takes an item's price and a discount percentage as input.
# Calculate the final price after the discount and return it.

def calculate_discount(price, discount_perc):
    final_price= price - (discount_perc)*price/100
    return final_price


price=float(input("Enter price : "))
discount_perc=float(input("Enter discount percentage : "))
print("Final price is", calculate_discount(price,discount_perc))
