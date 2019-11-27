#include<stdio.h>
#include<conio.h>

int countinig(char []);

void main()
{
	char str[100],n;
	clrscr();
	printf("\n\tEnter String:::¯--->");
	gets(str);
	n=counting(str);
	printf("\n\tString Length :::¯--->%d",n);
//	printf("\n\tString Length :::¯--->%d",strlen(str));
	getch();
}
int counting(char str[])
{
	int i,c=0;
	for(i=0;str[i];i++)
		c++;
	return c;
}