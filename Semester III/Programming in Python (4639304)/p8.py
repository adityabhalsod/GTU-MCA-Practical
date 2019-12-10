n=int(input("Enter Number.."))
temp=n
pel=0
while temp>0 :
	rem=temp%10
	pel=(pel*10)+rem
	temp//=10
if pel==n:
	print(n," is a pelindrom number..")
else:
	print(n,"is not a pelindrom number..")
	