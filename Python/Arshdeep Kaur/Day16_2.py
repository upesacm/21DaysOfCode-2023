#Write a Python program that uses NumPy to generate a set of 100 random numbers between 0 and 1. Calculate their mean and standard deviation, and display the results with descriptive messages.

import numpy as np

random_numbers = np.random.random(100)

mean_value = np.mean(random_numbers)
std_deviation = np.std(random_numbers)

print("Generated 100 random numbers between 0 and 1:")
print(random_numbers)
print("\nMean of the numbers: {:.4f}".format(mean_value))
print("Standard deviation of the numbers: {:.4f}".format(std_deviation))
