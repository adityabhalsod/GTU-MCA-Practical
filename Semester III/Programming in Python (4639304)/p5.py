x=int(input("Enter The Number .."))
y=int(input("Enter The Number .."))
z=int(input("Enter The Number .."))

if x>y and x>z:
	print("X is Max..",x)
elif y>x and y>z:
	print("Y is Max..",y)
else:
	print("Z is Max..",z)

if x<y and x<z:
	print("X is Min..",x)
elif y<x and y<z:
	print("Y is Min..",y)
else:
	print("Z is Min..",z)
