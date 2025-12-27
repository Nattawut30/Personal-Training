# Dtype = Keyword argument that tells NumPy what kind of values are stored in an array
#       otherwise NumPy guesses the best data type based on your data
#       Manually setting dtype improves performance
#       & is more efficient (especially when working with large data sets)

# integer (int8, int16, int32, int64)
# float (float16, float32, float64)
# boolean (bool_)
# string (str_, <U#)
# object (object_)

import numpy as np

# int8, 8 bits, min: -128, max: 127
# int16, 16 bits, min: -32768, max: 32,767
# int32, 32 bits, min: -2,147,483,648, max: 2,147,483,647
# int 64, 64 bits, min: -9.22e18, max: 9.22e18

array = np.array([1, 2, 3, 4, 5], dtype=np.int64)
array1 = np.array([1, 2, 3, 4, 5], dtype=np.float32)
array2 = np.array([1, 2, 3, 4, 5, 0], dtype=np.bool_)
array3 = np.array(["Apple", "Orange", "Banana"], dtype=np.str_)
array4 = np.array(["Apple", "Orange", "Banana"], dtype="<U4")
array5 = np.array([1, 2.9, 3, 4, 5, True, "Apple"], dtype=np.object_)

print(array)
print(array.dtype)
print(f"{array.nbytes} bytes") # 8 bit = 1 byte, 8x5 = 40
print()

print(array1)
print(array1.dtype)
print(f"{array1.nbytes} bytes")
print()

print(array2)
print(array2.dtype)
print(f"{array2.nbytes} bytes")
print()

print(array3)
print(array3.dtype)
print(f"{array3.nbytes} bytes")
print()

print(array4)
print(array4.dtype)
print(f"{array4.nbytes} bytes")
print()

print(array5)
print(array5.dtype)
print(f"{array5.nbytes} bytes")
print()

# Convert

A1 = np.array([1.1, 2.2, 3.3, 4.4, 5.5], dtype=np.int8)

A1 = array.astype(np.int16) # Convert it into another dtype

print(A1)
print(A1.dtype)
print(f"{A1.nbytes} bytes")