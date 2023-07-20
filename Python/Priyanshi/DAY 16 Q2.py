import numpy as np
random_numbers = np.random.rand(100)
mean = np.mean(random_numbers)
std_dev = np.std(random_numbers)
np.set_printoptions(threshold=np.inf)
print("Generated random numbers between 0 and 1:",random_numbers)
print("Mean:", mean)
print("Standard Deviation:", std_dev)

