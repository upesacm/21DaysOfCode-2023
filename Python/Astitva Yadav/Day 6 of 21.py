#1. Write a function that accepts a list of integers and returns the largest number from the list.

def max_number(numbers):
  # initialize the largest number as the first element of the list
  largest = numbers[0]
  # loop through the rest of the list
  for number in numbers[1:]:
    # compare each number with the current largest number
    if number > largest:
      # update the largest number if a bigger one is found
      largest = number
  # return the largest number
  return largest

# prompt the user to enter a list of numbers separated by commas
user_input = input("Enter a list of numbers separated by commas: ")
# convert the user input to a list of integers
user_list = [int(x) for x in user_input.split(",")]
# call the function and store the result
result = max_number(user_list)
# print the result with a descriptive message
print(f"The largest element in {user_list} is {result}.")


#2. Write a Python program that finds the second smallest element in a given list and displays it with a descriptive message.
def second_smallest(numbers):
  # sort the list in ascending order
  numbers.sort()
  # return the second element of the sorted list
  return numbers[1]

# prompt the user to enter a list of numbers separated by commas
user_input = input("Enter a list of numbers separated by commas: ")
# convert the user input to a list of integers
user_list = [int(x) for x in user_input.split(",")]
# call the function and store the result
result = second_smallest(user_list)
# print the result with a descriptive message
print(f"The second smallest element in {user_list} is {result}.")
