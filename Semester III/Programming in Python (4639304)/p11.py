def fibo(n):
   """Recursive function to
   print Fibonacci sequence"""
   if n < 2:
       return n
   else:
       return(fibo(n-1) + fibo(n-2))

# Change this value for a different result
n=int(input("Enter Number to print fibonacci number..."))

# check if the number of terms is valid
if n <= 0:
   print("Plese enter a positive integer")
else:
   print("Fibonacci series : ")
   for i in range(n):
       print("\t",fibo(i))