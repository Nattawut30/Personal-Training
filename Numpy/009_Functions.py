from traceback import print_tb

import numpy as np

# Functions you should know

array1 = np.zeros((2, 3, 10)) # 2 Layers, 3 rows, 10 column
print(array1)
print()

array2 = np.ones((2, 3, 10))
print(array2)
print()

array3 = np.full((2, 3, 10), 9)
print(array3)
print()

array4 = np.eye(5)
print(array4)
print()

array5 = np.empty((2, 3))
print(array5)
print()

array6 = np.arange(0, 100, 2) # Start, Stop, Step
print(array6)
print()

array7 = np.linspace(0, 50, 6) # Start, Stop, Num
print(array7) # Linear number
print()


