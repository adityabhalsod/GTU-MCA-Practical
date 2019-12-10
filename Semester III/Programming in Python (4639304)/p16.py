import books,pickle
while True:
	print("1-Issue Book")
	print("2-View Issued Book")
	print("3-Exit")
	
	ch=int(input("Enter your choice..."))
	if ch==1:
		fp=open('show.dat','ab')
		n=int(input("How many books to issue:"))
		for i in range(n):
			BookNo=int(input("Enter Book ISBN No:"))
			name=input("Enter Name Of Book:")
			s=books.book(BookNo,name)
			pickle.dump(s,fp)
		fp.close()	
	elif ch==2:
		fp=open('show.dat','rb')
		print("Issued Books")
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
