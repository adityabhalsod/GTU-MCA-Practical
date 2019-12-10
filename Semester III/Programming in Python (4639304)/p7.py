n=int(input("Enter Number ..."))
arm=0
temp=n
while temp>0:
	rem=temp%10
	arm=arm+(rem**3)
	temp//=10
if arm==n:
	print("Number is armstrong..")
else:
	print("Number is not armstrong..")