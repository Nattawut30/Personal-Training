# Filtering = Refers to the process of selecting elements
#             from an array that match a given condition

# Let's Sort some data
import numpy as np

ages = np.array([[21, 17, 19, 20, 16, 30, 18, 65],
                 [39, 22, 15, 99, 18, 19, 20, 21]])

teenagers = ages[ages < 18]
adults = ages[(ages >= 18) & (ages < 65)] # AND conditions
# OR = adults = ages[(ages < 18) | (ages >= 65)]
seniors = ages[ages >= 65]
evens = ages[ages % 2 == 0]
odds = ages[ages % 2 != 0]

mature = np.where(ages >= 18, ages, 0)
# Sort the data that not match the condition on the matrix, set it 0
# 0 = not belong to the conditions

print(teenagers)
print(adults)
print(seniors)
print(evens)
print(odds)
print()

print(mature)