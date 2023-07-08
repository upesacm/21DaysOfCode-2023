def larget_num():
    r = int(input("Enter the range of list: "))

    num = []

    for i in range(0, r):
        n = int(input("Enter the value: "))

        num.append(n)

    max_val = max(num)

    print(f"Maximum value out of the {num} is {max_val}")

larget_num()
