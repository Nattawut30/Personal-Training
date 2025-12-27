import numpy as np

array = np.array([1, 2, 3])

# Scalar Arithmetic = Single Value

#Basic
print(array + 1)
print(array - 2)
print(array * 3)
print(array / 4)
print(array ** 5)
print()

#Vectorized Math Function
# Single dimension such as 1D

print(np.sqrt(array))
print(np.round(array)) # Round up the number 2.5 = 3.0, 3.99 = 4.00
print(np.floor(array)) # round down the number 2.5 = 2., 3.99 = 3.
print(np.pi)
print()

#EXCERCISE
# A = Pi * R ** 2
radii = np.array([1, 2, 3])
print(np.pi * radii ** 2)
print()

# Element-wise Arithmetic

array1 = np.array([1, 2, 3])
array2 = np.array([4, 5, 6])

print(array1 + array2) # Plus value in the matrix
print(array1 - array2) # minus value in the matrix
print(array1 * array2) # multiply in the matrix
print(array1 / array2) # divided in the matrix
print(array1 ** array2) # Power value
print(array1 % array2)
print(array1 // array2)
print(array1 >= array2)
print(array1 <= array2)
print()

# Comparison Operators

scores = np.array([91, 55, 100, 73, 82, 64])
print(scores >= 60)
print(scores < 60)

# Basically, Filtering the value

scores[scores < 60] = 0
print(scores)