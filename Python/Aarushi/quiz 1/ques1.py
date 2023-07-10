def sd(nums):
    sorting= sorted(set(nums))
    return sorting

def main():
    try: 
        us= input()
        nums= list(map(int, us.split()))
        sn=sd(nums)
        print("The Sorted Non-Duplicate List:", sn)
    except ValueError:
        print("Invalide input.")
main()
