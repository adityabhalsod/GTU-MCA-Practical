#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	clrscr();
	printf("\n\tEnter Fahrenheit:::¯--->");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\n\tCentigrade Is :::¯--->%f",c);
	getch();
}