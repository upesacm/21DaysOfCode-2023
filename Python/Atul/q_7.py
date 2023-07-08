def farenheit_to_celsius(Celsius):
    farenheit=(Celsius* 9/5)+32
    return farenheit
    
a=int(input("Enter your temperature in celsius:"))
print("Your temperature is ",farenheit_to_celsius(a),"in farenheit")
