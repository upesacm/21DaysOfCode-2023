def calculate_discount(total, discount):
    discount_amount = total * (discount/100)
    final_price = total-discount_amount
    
    return final_price


items = int(input("Enter number of items: "))
discount = int(input("Enter the discount: "))

total = 0

for i in range(0, items):
    price = float(input("Enter the price of each item: "))
    total = total + price
    
final_price = calculate_discount(total, discount)

print(f"Price before discount: {total} \nPrice after discount: {final_price}")
