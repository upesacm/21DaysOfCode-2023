def check_triplet_exists(a, b, c):
    for x in range(1, c + 1):
        if x % a == 0:
            for y in range(1, c + 1):
                if y % b == 0:
                    for z in range(1, c + 1):
                        if z % c == 0 and x + y > z:
                            return True
    return False

try:
    a, b, c = map(int, input().split())
    if check_triplet_exists(a, b, c):
        print("Triplet Exists")
    else:
        print("Triplet Doesn't Exist")
except ValueError:
    exit()
