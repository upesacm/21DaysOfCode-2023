# 2. Plot a simple line graph using Matplotlib that shows the population growth of a 
# city over 10 years. Label the axes and provide a title for the graph.


import matplotlib.pyplot as plt 

years = [2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022]
population = [500000, 550000, 600000, 650000, 700000, 750000, 800000, 850000, 900000, 950000]

plt.plot(years, population, marker='o', linestyle='-', color='b')
plt.xlabel('Years')
plt.ylabel('Population')
plt.title('Population Growth of the City over 10 Years')
plt.show()
