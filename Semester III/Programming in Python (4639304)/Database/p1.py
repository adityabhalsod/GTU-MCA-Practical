import mysql.connector

print("1) Add/insert a Record\n2) Modify a Record\n3) Display a record\n4) Delete a Record\n")
choice=int(input("Enter the Choice"))

mydb = mysql.connector.connect(host="localhost",
        user="root",passwd="admin",database="pythondb")
mycursor = mydb.cursor()

if(choice==1):
	#insert Records
	no=int(input("Enter the Employee Number "))
	name=input("Enter the Employee Name ")
	phone=input("Enter the Employee Phone Number ")
	
	sql="INSERT INTO employee (eno, ename,ephone) VALUES (%s, %s, %s)"
	val = (no,name,phone)
	mycursor.execute(sql,val)
	mydb.commit()
	print(mycursor.rowcount, "record inserted.")
elif(choice==2):
	#display Records
	mycursor.execute("SELECT * FROM employee")
	myresult = mycursor.fetchall()
	
	for i in myresult:
		print(i)
	
	#update Records
	no=int(input("Enter the Employee Number to update "))
	
	name=input("Enter the New Employee Name ")
	phone=input("Enter the New Employee Phone Number ")
	
	sql="update employee SET ename=%s,ephone=%s WHERE eno = %s "
	val = (name,phone,no)
	mycursor.execute(sql,val)
	mydb.commit()
	print(mycursor.rowcount, "record Updated.")
	
	#display Records
	mycursor.execute("SELECT * FROM employee")
	myresult = mycursor.fetchall()
	
	for i in myresult:
		print(i)
elif(choice==3):
	#Display Records
	mycursor.execute("SELECT * FROM employee")
	myresult = mycursor.fetchall()
	
	for i in myresult:
		print(i)
elif(choice==4):
	#display Records
	mycursor.execute("SELECT * FROM employee")
	myresult = mycursor.fetchall()
	
	for i in myresult:
		print(i)

	#delete Records
	no=int(input("Enter the Employee Number to Delete "))
	
	sql="delete from employee where eno = %s"
	val = (no,)
	mycursor.execute(sql,val)
	mydb.commit()

	print(mycursor.rowcount, "record(s) deleted")
	
	
	#display Records
	mycursor.execute("SELECT * FROM employee")
	myresult = mycursor.fetchall()
	
	for i in myresult:
		print(i)
else:
	print("Not Valid Choice")

