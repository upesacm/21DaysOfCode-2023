def calculate_discount(price, discount_percentage):
    discount_amount = price * (discount_percentage / 100)
    final_price = price - discount_amount
    return final_price

item_price = float(input("Enter the item's price: "))
discount_percentage = float(input("Enter the discount percentage: "))

final_price = calculate_discount(item_price, discount_percentage)
print("Final Price:", final_price)

