import matplotlib as mpl

def plot_population_growth():
    years = list(range(1, 11))  
    population = []
    for year in years:
        while True:
                population.append(int(input(f"Enter the population for year {year}: ")))
                break
    fig, ax = mpl.pyplot.subplots()
    ax.plot(years, population, marker='o', linestyle='-')
    ax.set_xlabel('Years')
    ax.set_ylabel('Population')
    ax.set_title('Population Growth of a City over 10 Years')
    ax.grid(True)

    mpl.pyplot.show()

if __name__ == "__main__":
    plot_population_growth()
