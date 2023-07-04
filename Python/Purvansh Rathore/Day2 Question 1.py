#DAY 2 Question 1

def check_even_odd(number):
    if (number & 1) == 0:  #checking using bit manipultation
        print("The number is even.")
    else:
        print("The number is odd.")

# Take user input
user_input = input("Enter an integer: ")

# Convert the input to an integer
try:
    number = int(user_input)
    check_even_odd(number)
except ValueError:
    print("Invalid input. Please enter an integer.")
