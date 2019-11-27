#include<stdio.h>
#include<conio.h>
void main()
{
	int count;
	char str[40],restr[40];
	clrscr();
	printf("\n\tEnter String:-");
	gets(str);
	strcpy(restr,str);
	strrev(restr);
	printf("\n\t%s",restr);
	count=strcmp(str,restr);
	if(count==0)
	{
		printf("\n\n\tPalindrom");
	}
	else
	{
		printf("\n\n\tNot Palindrom");
	}
	getch();
}