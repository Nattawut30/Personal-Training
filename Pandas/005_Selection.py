import pandas as pd

df = pd.read_csv("data01.csv", index_col="Name") # Set an index to be 'Name' not 0

# -- SELECTION BY COLUMN --

# print(df["Name"].to_string())
# print(df["Height"].to_string())
# print(df["Weight"].to_string())

# print(df[["Name", "Height", "Weight"]].to_string())
print()

# -- SELECTION BY ROW/S --

# print(df.loc[0]) = sort by index

print(df)
# print(df.loc["Charizard": "Blastoise", ["Height", "Weight"]])
# Sort specific

# print(df.iloc[0:11:2, 0:3]) = Sort by built-in

# -- SELECTION BY INPUT --

pokemon = input("Enter a Pokemon name: ")

try:
    print(df.loc[pokemon])

except KeyError:
    print(f"{pokemon} not found")