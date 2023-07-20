#Plot a simple line graph using Matplotlib that shows the population growth of a city over 10 years. Label the axes and provide a title for the graph.

import matplotlib.pyplot as plt

def plotPopulation():

    years = range(2013, 2023)
    population = [1000, 7000, 3000, 9000, 5000, 6000, 2000, 8000, 4000, 10000]

    plt.plot(years, population, marker='o', linestyle='-')

    plt.xlabel('Year')
    plt.ylabel('Population')
    plt.title('Population Growth of a City Over 10 Years')

    plt.grid(True)
    plt.show()

plotPopulation()
