n=int(input("Enter how many records you have to enter ..."))
for i in range(0,n):
	roll=input("Enter Student roll number ..")
	name=input("Enter Na0me of student ..")
	data=[roll,name,"\n"]
	try:	
		fp=open("p13.txt","a")
		fp.writelines(data)	
	except Exception:
		fp=open("p13.txt","w")
		fp.writelines(data)	
	finally:
		fp.close()
try:
	fp=open("p13.txt","r")
	'''for rec in fp:
		print(rec)
	'''	
	line=fp.readline()
	print(line)
	#fp.seek(0,0)
	lines=fp.readlines()
	print(lines)	
except Exception as e: 
	print(e)
finally:
	fp.close()