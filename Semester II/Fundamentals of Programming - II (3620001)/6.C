#include<stdio.h>
#include<conio.h>
#include<string.h>
int pal(char *);
void main()
{
	char *str;
	int len;
	clrscr();
	printf("\n\tC Program to check string is palindrom or not using pointer...");
	printf("\n\tEnter A string..");
	gets(str);
	len=pal(str);
	if(len==0)
		printf("\n\tPalindrom");
	else
		printf("\n\t Not Palindrom");
	getch();
}
int pal(char*str)
{
	char *revstr;
	int n;
	strcpy(revstr,str);
	strrev(revstr);
	printf("\n\tReverse ...%s",revstr);
	n=strcmp(revstr,str);
	return n;
}