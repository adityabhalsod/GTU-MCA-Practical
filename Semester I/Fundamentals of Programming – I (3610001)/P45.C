#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,j;
	clrscr();
	printf("\n\tEnter String :::¯--->");
	gets(str);
	for(i=0;str[i];i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c",str[j]);
		}
		printf("\n");
	}
	getch();
}