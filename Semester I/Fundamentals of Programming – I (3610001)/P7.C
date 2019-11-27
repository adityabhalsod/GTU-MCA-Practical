#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n\tEnter Number :::¯--->");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n\t%d is Even Number...",n);
	}
	else
	{
		printf("\n\t%d is Odd Number...",n);
	}
	getch();
}