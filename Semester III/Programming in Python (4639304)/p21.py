import matplotlib.pyplot as plt 
 

x = [1960, 1970, 1980, 1990, 2000, 2010]
y = [449.48, 553.57, 696.783, 870.133, 1000.4, 1309.1]

plt.plot(x,y,color='orange')
plt.xlabel('year')
plt.ylabel('Growth')
plt.title('pvt.ltd')
plt.show()