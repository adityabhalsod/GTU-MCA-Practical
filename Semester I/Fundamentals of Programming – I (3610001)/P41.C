#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sp=0,cm=0,ch=0,line=1,wrd=0;
	char str[40];
	clrscr();
	printf("\n\tEnter String:-");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
		{
			sp++;
		}
		else if(str[i]==',')
		{
			cm++;
		}
		else if(str[i]=='\n')
		{
			line++;
		}
		else
		{
			ch++;
		}

	}
	wrd=cm+(sp+1);
	printf("\n\tSpace=%d",sp);
	printf("\n\tComma=%d",cm);
	printf("\n\tLines=%d",line);
	printf("\n\tWords=%d",wrd);
	printf("\n\tcharacter=%d",ch);
	getch();
}