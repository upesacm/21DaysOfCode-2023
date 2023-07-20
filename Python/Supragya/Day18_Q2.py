# Q2 Plot a simple line graph using Matplotlib that shows the population growth of a city over 10 years. 
# Label the axes and provide a title for the graph.
import matplotlib.pyplot as plt
years=[2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021,2022]
population =[50,120,170,280,250,390,300,420,590,680]
plt.plot(years,population,marker='o', linestyle='-')
plt.xlabel('years')
plt.ylabel('population')
plt.title('Population Growth')
plt.grid(True)
plt.show()

