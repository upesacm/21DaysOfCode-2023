#Q1 : Write a Python program that takes an integer as input and determines whether it is even or odd.
print("Welcome to EVEN-ODD Machine!!")
try :
  num = int(input("Please enter any integer : "))
except :
  print("Please enter an integer value. ")
else :
  if num==0 :
    print("{} is neither even nor odd.".format(num))
  elif num%2==0 :
    print("{} is an even number.".format(num))
  else :
    print("{} is an odd number.".format(num))
finally :
  print("\nThank you!!\nKeep visiting!!")





#Q2 : Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.
#Q1 : Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.
print("Welcome to COUNT machine!!")
text = input("Please enter the text : ")
#print(text)
words = len(text.split())
print("Number of words in the entered text : {}".format(words))
print("\nThank you!!\nKeep visiting!!")
