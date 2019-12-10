import matplotlib.pyplot as plt   
from pandas import *

empage=[22,45,55,65,15,35,45,62,45,62,20,34,75,65,45,43,25,34,45]
bins=[0,10,20,30,40,50,60,70,80]

plt.hist(empage,bins,histtype='bar',rwidth=0.8,color='cyan')

plt.xlabel('age')
plt.ylabel('no of Employees')
plt.title("Histogram example")
plt.legend()
plt.show()