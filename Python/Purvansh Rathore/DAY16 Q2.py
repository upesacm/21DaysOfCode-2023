import numpy as np

# Generate a set of 100 random numbers between 0 and 1
random_numbers = np.random.rand(100)

# Calculate the mean and standard deviation of the random numbers
mean_value = np.mean(random_numbers)
std_deviation = np.std(random_numbers)

# Display the results with descriptive messages
print("Generated 100 random numbers between 0 and 1:")
print(random_numbers)

print("\nMean of the random numbers:", mean_value)
print("Standard deviation of the random numbers:", std_deviation)
