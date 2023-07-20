# 2. Write a Python program that uses NumPy to generate a set of 100 random numbers between 0 and 1.
# Calculate their mean and standard deviation, and display the results with descriptive messages.

import numpy as np

random_numbers = np.random.rand(100)

#print(random_numbers)
# Calculate the mean and standard deviation
mean = np.mean(random_numbers)
std_dev = np.std(random_numbers)

print("Generated 100 random numbers between 0 and 1.")
print("Mean:", mean)
print("Standard Deviation:", std_dev)