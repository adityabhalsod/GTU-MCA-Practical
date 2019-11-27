#include<stdio.h>
#include<conio.h>
void main()
{
	int paisa=0;
	float rs;
	clrscr();
	printf("\n\tEnter Rupees :::¯--->");
	scanf("%f",&rs);
	paisa=rs*100;
	printf("\n\tPaisa:::¯--->%d",paisa);
	getch();
}