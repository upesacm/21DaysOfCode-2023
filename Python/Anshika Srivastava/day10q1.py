def calculate_discount(price,discount_perc):
    discount=price*(discount_perc/100)
    finalp=price-discount
    return finalp
    
price=float(input("Enter price of the item\n"))
discount_perc=float(input("Enter discount percentage\n"))
finalp=calculate_discount(price,discount_perc)
print("Final price of item after discount is",finalp)
