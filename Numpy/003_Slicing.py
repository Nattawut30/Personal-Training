import numpy as np

# 4X4 Matrix
array = np.array([[1, 2, 3, 4], #0
                  [5, 6, 7, 8], #1
                  [9, 10, 11, 12], #2
                  [13, 14, 15, 16]]) #3

# Index counting always start at 0
# array[start:end:step]

print(array[0])
print(array[-1]) # Invert reverse, will give you a last rows
print()

print(array[0:3]) # Print the first 3 rows, skip the last rows
print()
print(array[1:4]) # Skip index 0 and print the next 3 rows
print()
print(array[0:4]) # Get all rows
print()
print(array[0:4:2]) # Give me every second row, jump each 2
print()
print(array[::-1]) # Return all the rows reversed
print()
print(array[::-2]) # Reverse order and selecting every second row
print()
print(array[:, 0]) # first is for the row, second is for the column
print()
print(array[:, 0:3]) # Only the first 3 columns
print()
print(array[:, 1:4]) # Ship the first column and print all the column after
print()
print(array[:, ::2]) # All rows but every 2 column
print()
print(array[:, ::-1]) # Reverse order in the matrix
print()
print(array[0:2, 0:2]) # first 2 columns and first 2 rows
print()
print(array[0:2, 2:]) # Last 2 columns and first 2 rows
print()
print(array[2:, 0:2]) # Last 2 rows and first 2 columns
print()
print(array[2:, 2:]) # Last 2 rows and Last 2 columns
print()