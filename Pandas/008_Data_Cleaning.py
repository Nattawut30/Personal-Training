# Data Cleaning = the process of fixing/removing:
#                 incomplete, incorrect, or irrelevant data.
#                 75% of work done with Pandas is data cleaning.

import pandas as pd

df = pd.read_csv('data01.csv')

# 1. Drop irrelevant Columns
df = df.drop(columns=["Weight", "No"])

# 2. Handle Missing Data
# df = df.dropna(subset=["Type2"]) # dropna = Drop Not Available # Kills all Type2 columns
df = df.fillna({"Type2": "None"}) # replace the missing value with the word "None"

# 3. Fix inconsistent values
df["Type1"] = df["Type1"].replace({"Grass": "GRASS",
                                   "Fire": "FIRE",
                                   "Water": "WATER"})
# Change some values into capitalize letter

# 4. Standardize Text
df["Name"] = df["Name"].str.lower()

# 5. Fix Data Types
df["Legendary"] = df["Legendary"].astype(bool)

# 6. Remove Duplicate Values
df = df.drop_duplicates()
# Kills all the copy or duplicate values in datasets

print(df.to_string())

# Data Cleaning Done Right!