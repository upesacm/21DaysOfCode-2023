# question 1
try:
    num = set(map(int, input().split(" ")))
    num2 = list(num)
    num2.sort()
    print("The Sorted Non-Duplicate List:", num2)
finally:
    print("")

# question 2
try:
    num=set(map(int,input().split(" ")))
    num2=list(num)
    if(num2.len>=2):
        max1=max(num2)
        num2.remove(max1)
        max2=max(num2)
        print("Product Of Largest Distinct Numbers: ",max1*max2)
    else:
        print("Product Of Largest Distinct Numbers: ",-1)
finally:
    print("")

# question 3
def check_triplet(a, b, c):
    if a == 0 or b == 0 or c == 0:
        return False

    if (c % gcd(a, b)) != 0:
        return False

    max_val = max(a, b, c)
    min_val = min(a, b, c)

    if max_val == c:
        return True

    k = 1
    while (k * max_val - min_val) % c != 0:
        k += 1

    x = k * max_val - min_val
    y = max_val
    z = c

    if x + y > z:
        return True

    return False


def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)
input_str = input("Enter three space-separated integers: ")
try:
    a, b, c = map(int, input_str.split())
    if check_triplet(a, b, c):
        print("Triplet Exists.")
    else:
        print("Triplet Doesn't exist.")
except ValueError:
    print("Invalid input. Please enter three integers separated by spaces.")
