# Generate some random number

import numpy as np

rng = np.random.default_rng(seed=1)
# If you use the same seed with somebody else,
# You'll have another copy of the same world as your friend
# It will produce the same results

print(rng.integers(low=1, high=101, size=(3, 2))) # Add more dimension
print()

np.random.seed(seed=1)
print(np.random.uniform(low=-1, high=1, size=(3, 2)))
print()

# Shuffle
rng = np.random.default_rng()

array = np.array([1, 2, 3, 4, 5])
rng.shuffle(array)
print(array)
print()

# Choice
rng = np.random.default_rng()

fruits = np.array(["apple", "orange", "banana", "coconut", "pineapple"])
fruits = rng.choice(fruits, size=(3, 3))
print(fruits)