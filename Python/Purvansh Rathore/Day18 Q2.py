import matplotlib.pyplot as plt

def plot_population_growth():
    # Data for population growth over 10 years
    years = list(range(2013, 2024))
    population = [10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000]

    # Create a line plot
    plt.plot(years, population, marker='o', linestyle='-', color='b')

    # Labeling axes and title
    plt.xlabel('Year')
    plt.ylabel('Population')
    plt.title('City Population Growth Over 10 Years')

    # Show the plot
    plt.show()

# Call the function to plot the graph
plot_population_growth()
