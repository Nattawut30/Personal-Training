import numpy as np

array = np.array([[1, 2, 3], [4, 5, 6]])

# -- Save a NumPy Array --

np.save("Data", array)
print("NumPy array was saved!")
print()

# -- Load a NumPy array --

array = np.load("Data.npy")
print(array)
print()

# -- Save multiple NumPy Array --

array1 = np.array([[1, 2, 3], [4, 5, 6]])
array2 = np.array([1.1, 2.2, 3.3, 4.4])
array3 = np.array([2025, 2026, 2027, 2028])

np.savez("Data1", array1, array2, array3) # Z = .Zip
print("NumPy arrays were saved!")

np.savez_compressed("Data2_CP", array1, array2, array3)
print("NumPy compressed arrays were saved!")
# Compressed = Use less memory to keep
print()

# -- Load Multiple NumPy array --

arrays = np.load("data1.npz")
array1 = arrays["arr_0"]
array2 = arrays["arr_1"]
array3 = arrays["arr_2"]

print(array1)
print(array2)
print(array3)
