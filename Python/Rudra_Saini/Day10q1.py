def calculate_discount(price):
    discount=int(input("enter discount % "))
    final=price-((price*discount)/100)
    return final

price=int(input("Enter price of item: "))
final=calculate_discount(price)
print("Final price is",final)
