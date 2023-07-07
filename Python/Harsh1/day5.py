#  Write a Python program that takes a student's score as input and determines whether the student has passed or failed. Assume that the passing score is 60 or greater.

#sol
score=int(input('Enter Your Score in range(0-100):'))
if score>=60 and score<=100:
    print('Pass!')
elif score>100:
    print('Enter Valid score')
else:
    print('Failed')

# Write a Python program that prints all the prime numbers between two given numbers provided by the user.

#sol
num_1=int(input('Enter 1st number:'))
num_2=int(input('Enter 2nd number:'))
print(f'The prime number in range {num_1} and {num_2} are:', end='')
for num in range(num_1, num_2):
    if num > 1:
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                break
        else:
            print(f'{num},', end='')
