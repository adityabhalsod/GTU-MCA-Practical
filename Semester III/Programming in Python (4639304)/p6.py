n=10
arr={}
for i in range(n):
	ele=int(input("Enter Number.."))
	arr[i]=ele
max=arr[0]
for i in range(n):	
	print("\t",arr[i])
flag=1
for i in range(n):	
	if not(arr[i]%2==0):
		if arr[i]>max :
			max=arr[i]
			flag=1	
if flag!=1:
	print("No Odd Number Found..")
else:
	print("Largest Odd Number is ...",max)