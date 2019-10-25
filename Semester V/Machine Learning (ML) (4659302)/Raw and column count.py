# Author by Aditya Bhalsod

import pandas
import subprocess as sp
import time
import os.path
import sys

sp.call('color 0a',shell=True)	

def clrscr():
	input("")
	sp.call('cls',shell=True)	

while 1:
	url=input("Enter files name : ")
	try:
		if((url=="Exit") or (url=="exit") or (url=="Quit") or (url=="quit")):
			sys.exit()
		elif(url!="") :
			if (os.path.isfile(url)==1):
				start_time = time.time()
				dataset = pandas.read_csv(url)
				print("\nYour files in raw    : ",dataset.shape[0])
				print("Your files in column : ",dataset.shape[1])
				print("\n\n-----execution time is %s in seconds-----" % (time.time() - start_time))
				input("")
				input("")
				input("")
				clrscr()
			else:
				print("\nSorry! file does't exists...")
				clrscr()
		else :
			print("\nPlease input file name...")
			clrscr()
	except Exception as e:
			print(e)
			clrscr()

