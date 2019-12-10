#upgrade the pip -> python.exe -m install pip --upgrade pip
 
#install the matplotlib -> python -m pip install -U matplotlib

import matplotlib.pyplot as plt 
  
# x axis values 
x = [1,2,3,4,5] 
# corresponding y axis values 
y = [10000,20000,30000,25000,35000] 
  
# plotting the points  
plt.bar(x, y, label='employee salary') 
  
# naming the x axis 
plt.xlabel('x - Employee Id') 
# naming the y axis 
plt.ylabel('y - Salaries') 
  
# giving a title to my graph 
plt.title('Bar Graph!') 
  
# function to show the plot 
plt.show() 