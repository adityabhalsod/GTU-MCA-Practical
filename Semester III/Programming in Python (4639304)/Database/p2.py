import mysql.connector
from pandas import *

mydb = mysql.connector.connect(host="localhost",
        user="root",passwd="admin",database="pythondb")
mycursor = mydb.cursor()
mycursor.execute("SELECT * FROM employee")
myresult = mycursor.fetchall()
lst=[]
for i in myresult:
	lst.append(i)
	
df=DataFrame(lst,columns=['Employee No','Employee Name','Employee Phone Number'])
df.set_index('Employee No',inplace=True)
print(df)

