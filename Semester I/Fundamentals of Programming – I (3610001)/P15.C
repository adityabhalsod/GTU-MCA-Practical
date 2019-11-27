#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n\tEnter Number :::¯--->");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
		printf("\n\t%d * %d = %d",n,i,(n*i));
	getch();
}