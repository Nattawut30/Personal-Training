import numpy as np

print(np.__version__) # Check version
print()

# list = duplicate
my_list = [1, 2, 3, 4]
my_list = my_list * 2
print(my_list)
print()

# array = double the digit
array = np.array([1, 2, 3, 4])
array = array * 2
print(array)
print(type(array))
print()