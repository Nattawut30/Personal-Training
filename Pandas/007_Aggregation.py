# Aggregate Function = Reduces a set of values into a single summary value
#                      Used to summarize and analyze data
#                      Often used with the groupby() function

import pandas as pd

df = pd.read_csv('data01.csv')

# These func. below apply to whole DataFrame
print(df.mean(numeric_only=True)) # Find the mean of any column that numeric
print()
print(df.sum(numeric_only=True)) # Sum all the columns
print()
print(df.min(numeric_only=True)) # Find the minimum
print()
print(df.max(numeric_only=True)) # Call the max value in column
print()
print(df.count()) # Count all, no need to pass keyword arguments
print()

# For Single Column

print(df["Height"].mean())
print(df["Height"].sum())
print(df["Height"].min())
print(df["Height"].max())
print(df["Height"].count())
print()

# groupby()

group = df.groupby("Type1")

print(group["Height"].mean())
print()
print(group["Height"].sum())
print()
print(group["Height"].min())
print()
print(group["Height"].max())
print()
print(group["Height"].count())
print()