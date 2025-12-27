# reshape() = Changes the shape of an array
#           w/o altering its underlying data
#           .reshape (layers, rows, columns)

import numpy as np

array = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
array = array.reshape((4, 3)) # As long as not more than 12
array1 = array.reshape((6, 2))
array2 = array.reshape((2, 2, 3)) # Layers, Rows, Columns
array3 = array.reshape(1, -1)

print(array)
print()
print(array1)
print()
print(array2)
print()
print(array3)
print()


print(array.shape)
print(array1.shape)
print(array2.shape)
print(array3.shape)