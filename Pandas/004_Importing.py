# Let's import some files
# CSV = Comma - Separated - Values
# JSON = JavaScript - Object - Notation

import pandas as pd

df = pd.read_csv("data01.csv")

print(df) # Print only first and last 5 rows
print()

print(".csv file")
print(df.to_string()) # Print everything, Be careful!
print()

# Let's try .json files

df = pd.read_csv("data02.json")
print(".json file")
print(df.to_string())
print()