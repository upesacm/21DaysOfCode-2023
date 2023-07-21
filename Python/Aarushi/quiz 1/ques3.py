#Method 1

def triplet(a, b, c):
    if a == 0 or b == 0 or c == 0:
        return "Triplet Doesn't Exist"
    if c % gcd(a, b) != 0:
        return "Triplet Doesn't Exist"
    return "Triplet Exists"

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

a, b, c = map(int, input().split())
print(triplet(a, b, c))

# Method 2 == with exception handling
'''
def triplet(a, b, c):
    try:
        if a == 0 or b == 0 or c == 0:
            return "Triplet Doesn't Exist"
        if c % gcd(a, b) != 0:
            return "Triplet Doesn't Exist"
        return "Triplet Exists"
    except ValueError:
        return "Invalid input. Please enter three integers."

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

try:
    a, b, c = map(int, input().split())
    print(triplet(a, b, c))
except ValueError:
    print("Invalid input. Please enter three integers.")
'''