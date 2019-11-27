#include<stdio.h>
#include<conio.h>
void main()
{
	char str[40],key[40];
	int flag=0;
	clrscr();

	printf("\n\tEnter String :-");
	gets(str);
	printf("\n\tEnter Key :-");
	gets(key);

	flag=strstr(str,key);

	//printf("\n%d",flag);
	if(flag<0)
	{
		printf("\n\tFound ");
	}
	else
	{
		printf("\n\t Not Found");
	}

	getch();
}