while 1:
	print("\n")
	s =input("Enter Your String....")
	print("\n\n1-Count Wovels")
	print("\n2-Length of String")
	print("\n3-Reverse String")
	print("\n4-Find and replace word")
	print("\n5-Check whether String is palindrom or not")
	print("\n6-Exit")
	ch=int(input("Enter Your choice..."))
	if ch==6:
		break
	elif ch==1:
		count = 0
		c=0
		vowel = set("aeiouAEIOU")
		for i in s:
		    if i in vowel:
		    	count = count + 1        
		    if i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U':
		    	c=c+1
		print("\nNo. of vowels :", count)
		print("\nC =",c)
	elif ch==2:
		count = 0	
		for i in s:
			count=count+1
		print("\nLength of string is : ",count)
	elif ch==3:
		str = ""
		for i in s:
			str = i + str
		#s=s[::-1]
		print("\nReverse String is :",str)
	elif ch==4:
		
		oldstr=input("Enter Old string to replace...")
		newstr=input("Enter new string to replace...")
		news=s.replace(oldstr,newstr)
		print("\nBefore replacement : ",s)
		print("\nAfter replacement : ",news)
	elif ch==5:

		str = ""
		for i in s:
			str = i + str
		if str==s:
			print("\nString is palindrom...")
		else:
			print("\nString is not palindrom...")
	else:
		print("\nInvalide option..\n\tPlease Enter Again...")