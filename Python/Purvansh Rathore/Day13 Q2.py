def subset_relationship(set1, set2):
    if set1.issubset(set2) and set2.issubset(set1):
        return "The first set is equal to the second set."
    elif set1.issubset(set2):
        return "The first set is a subset of the second set."
    elif set2.issubset(set1):
        return "The second set is a subset of the first set."
    else:
        return "The two sets have no subset relationship."

# Example usage
set1 = {1, 2, 3}
set2 = {1, 2, 3, 4, 5}

relationship = subset_relationship(set1, set2)
print(relationship)
