/**
Program : 6
Determine product of 2 large integers using multiplication 
of their digits. For simplicity, assume both numbers to have 
same number of digits. This assumption can be relaxed subsequently
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
long prod(long,long);
long noOfDigit(long,long);
void main()
{
 long m,n;
 clrscr();
 printf("\n Enter number1 > ");
 scanf("%ld",&m);
 printf("\n Enter number2 > ");
 scanf("%ld",&n);

 printf("\n multiplication of %ld and %ld is > %ld",m,n,prod(m,n));

getch();
}
 
long prod(long u,long v)
{
     long x,y,w,z;
     long n,m,p,q,r;
 
 	 n=noOfDigit(u,v);
 
	 if(u==0 || v==0)
	 {
	  	return 0;
	 }
	 else if(n<=2)
	 {
	  	return (u*v);
	 }
	 else
	 {
	  m=floor(n/2);
	 
	  w=u/pow(10,m);
	  x=u%(int)pow(10,m);
	  y=v/pow(10,m);
	  z=v%(int)pow(10,m);
	 
	  p=prod(w,y);
	  q=prod(x,z);
	  r=prod(w+x,y+z);
	 
	  return p * pow(10,2*m) + (r-p-q) * pow(10,m) + q;
	 }
}
 
 
long noOfDigit(long m,long n)
{
 long max;
 int b=0;

	 if(m>=n)
	  max=m;
	 else
	  max=n;

	 while(max>0)
	 {
	  max=max/10;
	  b++;
	 }

return b;
}