def reverse(x):
    return x[::-1]

a=input("Enter your text:")
for x in a.split():
 x=reverse(x)
 print(x)

