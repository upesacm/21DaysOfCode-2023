def discount(price, discount_perc):
    amount = price * (discount_perc / 100)
    final_price = price - amount
    return final_price
