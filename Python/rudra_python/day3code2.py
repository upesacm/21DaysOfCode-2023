# Write a Python program that prompts the user to enter a series of integers, one at a time, until they enter a negative number. The program should then terminate and compute and print the sum of all the positive integers entered by the user.
def main():
    total_sum = 0

    while True:
        num = int(input("Enter an integer (enter a negative number to stop): "))
        
        if num < 0:
            break
        
        total_sum += num

    print("The sum of positive integers entered is:", total_sum)

if __name__ == "__main__":
    main()
