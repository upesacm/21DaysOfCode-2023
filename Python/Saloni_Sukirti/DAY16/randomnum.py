# Python

# 1. Create a NumPy array of shape (3, 3) filled with random integers between 1 and 10.
#  Print the array with a descriptive message.

# 2. Write a Python program that uses NumPy to generate a set of 100 random numbers between 0 and 1.
# Calculate their mean and standard deviation, and display the results with descriptive messages.


import numpy as np

array = np.random.randint(1, 11, size=(3, 3))

print("Random array of shape (3, 3) filled with integers between 1 and 10:")
print(array)
