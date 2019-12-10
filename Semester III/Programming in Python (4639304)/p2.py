n1=int(input("Enter N1.."))
n2=int(input("Enter N2.."))

print("\nBefore Swaping..Num1=",n1)
print("\nBefore Swaping..Num2=",n2)

n1=n1+n2
n2=n1-n2
n1=n1-n2
print("\nAfter Swaping..Num1=",n1)
print("\nAfter Swaping..Num2=",n2)

print("\n\n\tSecond Method..")
print("\nBefore Swaping..Num1=",n1)
print("\nBefore Swaping..Num2=",n2)
n1,n2=n2,n1
print("\nAfter Swaping..Num1=",n1)
print("\nAfter Swaping..Num2=",n2)