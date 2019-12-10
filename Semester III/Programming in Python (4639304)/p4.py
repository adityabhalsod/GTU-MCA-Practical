def addition(a,b):
	return a+b
def subtraction(a,b):
	return a-b
def multiplication(a,b):
	return a*b
def division(a,b):
	return a/b
while 1:
	print("Choices are..")
	print("\n\t1-addition\n\t2-subtraction\n\t3-multiplication\n\t4-division\n\t5-exit")	
	ch=int(input("\nEnter your choice ..."))
	if ch==5:
		break
	n1=int(input("\nEnter First Number..."))
	n2=int(input("\nEnter Second Number..."))
	
"""	switch ch
		case 1:
		print(n1,"+",n2,"=",addition(n1,n2))
		2:
		print(n1,"-",n2,"=",subtraction(n1,n2))
		3:
		print(n1,"*",n2,"=",multiplication(n1,n2))
		4:
		print(n1,"/",n2,"=",division(n1,n2))
	else:
		print("Invalide Option...")
	"""
	if ch==1:
		print(n1,"+",n2,"=",addition(n1,n2))
	elif ch==2:
		print(n1,"-",n2,"=",subtraction(n1,n2))
	elif ch==3:
		print(n1,"*",n2,"=",multiplication(n1,n2))
	elif ch==4:
		print(n1,"/",n2,"=",division(n1,n2))
	else:
		print("Invalide Option..")