''' Write a Python program that handles a division by zero error using a try-except block. Display a user-friendly error message.'''

#sol
try:
    num1=int(input('Enter first number:'))
    num2=int(input('Enter second number:'))
    result=num1/num2
    print(f'The division  of num1 and num2 is {result}')
except ZeroDivisionError:
    print(f'Division of {num1} and {num2} is not possible due to Zero Division Error')

''' Write a Python program that prompts the user to enter a filename and tries to open the file. Handle the FileNotFoundError exception and display an appropriate message.'''

#sol
try:
    file=input('Enter file name:')
    file=file+'.txt'
    with open(file, "r") as f:
        text=f.read()
        print(f'The text written in the file is: \n{text}')

except FileNotFoundError:
    print(f'File name ({file}) not found in teh system.')
