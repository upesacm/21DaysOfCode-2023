import numpy as np

random_numbers = np.random.random(100)


mean = np.mean(random_numbers)
std_dev = np.std(random_numbers)


print("Set of 100 random numbers between 0 and 1:")
print(random_numbers)
print("Mean:", mean)
print("Standard Deviation:", std_dev)

