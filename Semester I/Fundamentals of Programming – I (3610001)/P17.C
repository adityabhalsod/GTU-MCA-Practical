#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fac=1;
	clrscr();
	printf("\n\tEnter Number :::¯--->");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fac=fac*i;
	}
	printf("\n\n\tFactorial of Given Number Is :::¯--->%d",fac);
	getch();
}