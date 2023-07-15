numerator = float(input("Enter the value of numerator: "))
denominator = float(input("Enter the value of denominator: "))

try:
    divisor = numerator / denominator
    
    print(f"The output is {divisor}")
except:
    print("Denominator cannot be zero")
