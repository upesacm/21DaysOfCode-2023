import matplotlib.pyplot as plt

years = list(range(2013, 2023))
population = [1000, 1200, 1500, 1800, 2000, 2200, 2400, 2600, 2800, 3000]

plt.plot(years, population)
plt.xlabel('Years')
plt.ylabel('Population')
plt.title('Population Growth of a City over 10 Years')
plt.grid(True)
plt.show()
