# Aggregate Functions = Summarize data and typically
#                       Return a single value

import numpy as np

array = np.array([[1, 2, 3, 4, 5],
                 [6, 7, 8, 9, 10]])

print(np.sum(array))
print(np.mean(array))
print(np.median(array))
print(np.max(array))
print(np.min(array))
print(np.std(array))
print(np.var(array)) # Variance
print(np.argmin(array)) # Arguments
print(np.argmax(array))
print()

print(np.sum(array, axis=0)) # apply this functions to all the column
print(np.sum(array, axis=1)) # Sum up all the rows instead, 15 is the first rows sum and 40 is the second row sum