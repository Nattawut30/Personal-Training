# DataFrame = A tabular data structure with rows AND columns (2-Dimensional)
#             Similar to an Excel spreadsheet

import pandas as pd

data = {
    "Name": ["Spongebob", "Patrick", "Squidward"],
    "Age": [30, 35, 50]
    }

# df = dataframe
df = pd.DataFrame(data, index=["Employee 1", "Employee 2", "Employee 3"])
# Set an index

print(df)
print()
print(df.loc["Employee 1"]) # Sort by label
print()
print(df.iloc[2]) # Sort by index
print()

# Add a new column
df["Job"] = ["Cook", "N/A", "Cashier"] # Should be the same orders as listed
print(df)
print()

# Add a new multiple rows
new_row = pd.DataFrame([{"Name": "Sandy", "Age": 28, "Job": "Engineer"},
                       {"Name": "Eugene", "Age": 60, "Job": "Manager"}],
                       index=["Employee 4", "Employee 5"]) # Add index
df = pd.concat([df, new_row])
print(df)