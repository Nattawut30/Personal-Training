# Broadcasting allows NumPy to perform ops on arrays
# with different shapes by virtually expanding dimensions
# so they match the larger array's shape.

# The dimension have the same size.
# OR
# One of the dimensions has a size of 1.

import numpy as np

array1 = np.array([[1, 2, 3, 4],
                   [5, 6, 7, 8],
                   [9, 10, 11, 12],
                   [13, 14, 15, 16]])
array2 = np.array([[1], [2], [3], [4]])

print(array1.shape)
print(array2.shape)

print(array1 * array2) # Multiply Matrix
print()

A1 = np.array([[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]])
A2 = np.array([[1], [2], [3], [4], [5], [6], [7], [8], [9], [10]])

print(A1.shape)
print(A2.shape)

print(A1 * A2)  # 10 Rows and 10 Columns
print()

# Must be matching together only to multiply the matrix