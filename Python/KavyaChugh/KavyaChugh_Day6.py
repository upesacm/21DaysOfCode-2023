#Write a function that accepts a list of integers and returns the largest number from the list
def largest_number(list):
    largest = list[0]
    for number in list:
        if number > largest:
            largest = number
    return largest
