import matplotlib.pyplot as plt
def population_growth():
    years = range(2023, 2034)
    population = [1000, 2000, 3000, 4500, 5000, 5500, 6000, 6500, 6300, 7000, 7500]
    plt.plot(years, population, marker='o', linestyle='-', color='b')
    plt.xlabel('Years')
    plt.ylabel('Population')
    plt.title('City Population Growth Over 10 Years')
    plt.show()
population_growth()
