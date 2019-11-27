#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20;
	float c=30.22,d=40.11;
	clrscr();

	printf("\n\n\tInteger Arithmetical operation..\tA=%d\tB=%d",a,b);
	printf("\n\tAddition=%d",(a+b));
	printf("\n\tMultiplication=%d",(a*b));
	printf("\n\tDivision=%d",(a/b));
	printf("\n\n\tFloat Arithmetical operation..\tC=%.2f\tD=%.2f",c,d);
	printf("\n\tAddition=%.2f",(c+d));
	printf("\n\tMultiplication=%.2f",(c*d));
	printf("\n\tDivision=%.2f",(c/d));
	getch();
}