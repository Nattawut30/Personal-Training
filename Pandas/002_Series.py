# Series = A Pandas 1-Dimensional labeled array that can hold any data type
#          Think of it like a single column in a spreadsheet (1-Dimensional)

import pandas as pd

data = [100, 102, 104, 202, 204]

series = pd.Series(data, index=["apartment #1",
                                "apartment #2",
                                "apartment #3",
                                "apartment #4",
                                "apartment #5"])

series.loc["apartment #3"] = 200 # Change the list

print(series)
print()
print(series.loc["apartment #1"]) # Choose from the list
print()
print(series.iloc[1]) # Choose by an index
print()
print(series[series < 200])
print()

# Let's try dictionary
# some kind of filtering and sorting data

calories = {"Day 1": 1750,
            "Day 2": 2100,
            "Day 3": 1700}

series = pd.Series(calories)

series.loc["Day 3"] += 500 # Add the value

print(series)
print()
print(series.loc["Day 3"])
print()
print(series[series >= 2000]) # These days not following the diets because calories >= 2000
