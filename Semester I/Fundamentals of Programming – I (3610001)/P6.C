#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();

	printf("\n\tEnter First Number :::¯--->");
	scanf("%d",&x);
	printf("\n\tEnter Second Number :::¯--->");
	scanf("%d",&y);

	printf("\n\n\tBefore Swapping...");
	printf("\n\tFirst Number\t:::¯--->%d",x);
	printf("\n\tSecond Number\t:::¯--->%d",y);

	x=x+y;
	y=x-y;
	x=x-y;

	printf("\n\n\tAfter Swapping...");
	printf("\n\tFirst Number\t:::¯--->%d",x);
	printf("\n\tSecond Number\t:::¯--->%d",y);

	getch();
}