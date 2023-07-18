'''Create a NumPy array of shape (3, 3) filled with random integers between 1 and 10. Print the array with a descriptive message.'''

#sol
import numpy
print('Array of shape (3, 3) filled with random integers between 1 and 10 is ')
print(numpy.random.randint(1,11, size=(3,3)))


'''Write a Python program that uses NumPy to generate a set of 100 random numbers between 0 and 1. Calculate their mean and standard deviation, and display the results with descriptive messages.'''

#sol
import numpy

set=(numpy.random.rand(100))
mean=numpy.mean(set)
standard_deviation=numpy.std(set)
print(f'The mean of 100 random number between 0 and 1 is {mean}')
print(f'The standard deviation of 100 random number between 0 and 1 is {standard_deviation}')
