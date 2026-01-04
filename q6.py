arr = [1, 2, 3, 2, 4, 1]
duplicates = set(x for x in arr if arr.count(x) > 1)
print(duplicates)
