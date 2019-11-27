#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\tEnter N1:::¯--->");
	scanf("%d",&a);
	printf("\n\tEnter N2:::¯--->");
	scanf("%d",&b);
	printf("\n\tEnter N3:::¯--->");
	scanf("%d",&c);
	if(a>=b && a>=c)
	{
		printf("\n\t%d Is Max",a);
	}
	else if(b>=a && b>=c)
	{
		printf("\n\t%d is Max",b);
	}
	else
	{
		printf("\n\t%d is Max",c);
	}
	getch();
}