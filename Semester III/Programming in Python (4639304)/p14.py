import salary,pickle
while True:
	print("1-Write")
	print("2-Read")
	print("3-Exit")
	print("4-Print salary slip")
	print("5-Department")
	ch=int(input("Enter your choice..."))
	if ch==1:
		fp=open('salary.dat','ab')
		n=int(input("How many records??"))
		for i in range(n):
			EmployeeNo=int(input("Enter Employee number .."))
			name=input("Enter Name")
			deptno=int(input("Enter Department number.."))
			basic=int(input("Enter basic salary.."))
			DA=int(input("Enter DA.."))
			HRA=int(input("Enter HRA.."))
			Conveyance=int(input("Enter Conveyance..."))
			s=salary.salary(EmployeeNo,name,deptno,basic,DA,HRA,Conveyance)
			pickle.dump(s,fp)
		fp.close()	
	elif ch==2:
		fp=open('salary.dat','rb')
		print("Salary of employee...")
		while True:
			try:				
				s=pickle.load(fp)
				s.display()
			except EOFError as e:
				print("End of file reached...",e)
				break
		fp.close()
	elif ch==3:
		break
	elif ch==4:
		key=int(input('Enter Emp no..'))
		flag=0
		fp=open('salary.dat','rb')
		print("Salary of employee...")
		while True:
			try:				
				s=pickle.load(fp)
				if (s.EmployeeNo==key):
					s.display()
					flag=1
					break
			except EOFError as e:
				print("End of file reached...",e)
				break
		fp.close()
		if not flag:
			print('Not Found')
	elif ch==5:
		dept=int(input('Enter dept no..'))
		flag=0
		fp=open('salary.dat','rb')
		print("Salary of employee...")
		while True:
			try:				
				s=pickle.load(fp)
				if (s.deptno==dept):
					s.display()
					flag=1					
			except EOFError as e:
				print("End of file reached...",e)
				break
		fp.close()
		if not flag:
			print('Not Found')
	else:
		print("Pls Enter Valide data...")
	