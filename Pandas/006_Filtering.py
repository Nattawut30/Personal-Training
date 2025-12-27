# Filtering = Keeping the rows that match a condition

import pandas as pd

df = pd.read_csv('data01.csv')

tall_pokemon = df[df["Height"] >= 2]
heavy_pokemon = df[df["Weight"] > 100]
legendary_pokemon = df[df["Legendary"] == 1] # True = 1, its work too

water_pokemon = df[(df["Type1"] == "Water") | # | = OR condition
                   (df["Type2"] == "Water")]

firefly_pokemon = df[(df["Type1"] == "Fire") &
                     (df["Type2"] == "Flying")]

print(tall_pokemon)
print()
print(heavy_pokemon)
print()
print(legendary_pokemon)
print()
print(water_pokemon)
print()
print(firefly_pokemon)

# Basically, You sort data specifically you wants
# Likes in Excel!