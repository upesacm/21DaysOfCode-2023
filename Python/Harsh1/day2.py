# Write a Python program that takes an integer as input and determines whether it is even or odd.

#sol
number=int(input('Enter number:'))
if(number % 2 == 0):
  print(f'The number ({number}) is even.')
else:
  print(f'The number ({number}) is odd.')

# Write a Python program that prompts the user to enter a sentence and counts the number of words in the sentence.

#sol
sentence=input('Enter Sentence:')
length=len(sentence)
a=1
for i in range(0, length):
    if sentence[i]==' ':
        a+=1
print(f'The Total number of word in sentence are {a}')
