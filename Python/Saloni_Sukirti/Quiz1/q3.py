def check_triplet_exists(a, b, c):
    if a == 0 or b == 0 or c == 0:
        return False



    for x in range(a, a * b + 1):
        for y in range(b, a * b + 1):
            for z in range(c, a * b + 1):
                if x + y > z:
                    return True

    return False

try:
    a, b, c = map(int, input().split())
    if check_triplet_exists(a, b, c):
        print("Triplet Exists")
        
    else:
        print("Triplet Doesn't Exist")
            
except ValueError:
        pass
        
