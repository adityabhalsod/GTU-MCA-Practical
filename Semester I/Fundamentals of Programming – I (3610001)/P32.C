#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[40],s2[40];
	clrscr();
	printf("\n\tEnter First String:-");
	gets(s1);
	printf("\n\tEnter Second String:-");
	gets(s2);
	strcat(s1,s2);
	printf("\n\tAfter Appending:-%s",s1);
	getch();
}