# Python

# 1. Write a Python function that takes a list of words as input and returns a dictionary
# where the keys are the words and the values are the frequencies of those words in the list.

# 2. Plot a simple line graph using Matplotlib that shows the population growth of a 
# city over 10 years. Label the axes and provide a title for the graph.


def wordsDict(l):
    dict = {}
    
    for i in l:
        dict[i] = l.count(i)

    return dict

l=["words","ok","ok","ok","i","Hey","Hello","words","for","the"]
print(wordsDict(l))