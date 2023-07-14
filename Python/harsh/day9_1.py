def calculate_discount(price, discount):
    final_price = price - (price * (discount / 100))
    return final_price

item_price = float(input("Enter the item price: $"))
discount_percentage = float(input("Enter the discount percentage: "))

discounted_price = calculate_discount(item_price, discount_percentage)

print(f"The final price after a {discount_percentage}% discount is: ${discounted_price}")
