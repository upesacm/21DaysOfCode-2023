''' Create a NumPy array of shape (3, 3) filled with random integers between 1 and 10.
Print the array with a descriptive message.'''

import numpy as np
array = np.random.randint(1, 11, size=(3, 3))
print("Random Integer Array (Shape: 3x3):")
print(array)
