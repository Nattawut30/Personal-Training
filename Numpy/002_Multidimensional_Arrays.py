import numpy as np

# It's form a dimensional Matrix
# add more list = add more dimension
array = np.array([[['A', 'B', 'C'], ['D', 'E', 'F'], ['G', 'H', 'I']],
                  [['J', 'K', 'L'], ['M', 'N', 'O'], ['P', 'Q', 'R']],
                  [['S', 'T', 'U'], ['V', 'W', 'X'], ['Y', 'Z', '_']]])

print(array.ndim)
print(array.shape) # 3 layers, 3 rows, 3 columns
print(array[0][0][1]) # pick object in column matrix
print(array[0][1][0]) # pick object in row matrix
print(array[1][1][1]) # don't forget python start with 0 when counting
print()

word = array[0, 0, 0] + array[1, 1, 1] + array[2, 0, 1]
print(word)
# pick the word 'ANT' from the matrix by Array