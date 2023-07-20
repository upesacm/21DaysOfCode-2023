''' Write a Python function that takes a list of words as input and returns a dictionary where the keys are the words and the values are the frequencies of those words in the list.'''

#sol
n=input('Enter of word with spaces:').split()
list1=list(map(str, n))
dictionary={}

for number in list1:
    if number in dictionary:
        dictionary[number]+=1
    else:
        dictionary[number]=1
print(dictionary)

'''Plot a simple line graph using Matplotlib that shows the population growth of a city over 10 years. Label the axes and provide a title for the graph.'''

#sol
import matplotlib.pyplot as plt
years = range(2014, 2024)
population = [50000, 55000, 60000, 65000, 70000, 75000, 80000, 85000, 90000, 95000]

plt.plot(years, population, marker='o', linestyle='-', color='b')

plt.xlabel('Year')
plt.ylabel('Population')
plt.title('Population Growth of the City over 10 Years')

plt.show()

