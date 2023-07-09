def get_integer_list():
    li1 = input()
    listt = []
    for num in li1.split():
        if num.isdigit():
            listt.append(int(num))
        else:
            print("Invalid input",num,"is not an integer and will be skipped.")
    return listt
def sort_and_remove_duplicates(listt):
    sorted_list = sorted(set(listt))
    return sorted_list
def main():
    d_list = get_integer_list()
    if not d_list:
        print("Empty list!")
        return
    sorted_list = sort_and_remove_duplicates(d_list)
    print("The Sorted Non-Duplicate List:", sorted_list)
if __name__ == "__main__":
    main()
