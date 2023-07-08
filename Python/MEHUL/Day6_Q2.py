num = []

def sort_val():
    r = len(num)

    for i in range(0, r-1):
        for j in range(0, r-i-1):
            if(num[j]>num[j+1]):
                temp = num[j]
                num[j] = num[j+1]
                num[j+1] = temp


def insert_val():
    r = int(input("Enter the range of list: "))

    for i in range(0, r):
        n = int(input("Enter the value: "))

        num.append(n)

insert_val()
sort_val()

print(f"Second smallest number is {num[1]}")
