#include<stdio.h>
#include<conio.h>

void main()
{
	char str[40],rstr[40], ch;
	int i,j, freq = 0,flag=0;
	clrscr();
	printf("\n\tEnter a string:- ");
	gets(str);
	strcpy(rstr,str);
	strrev(rstr);
	for(i=0;str[i];i++)
	{
		flag=0;
		if(str[i]==rstr[0])
		{
			flag=1;
			for(j=1;rstr[j];j++)
			{
				if(str[i+j]!=rstr[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
				freq++;
		}
	}
	printf("\n\t'%s' occurs in '%s' %d times\n",rstr,str,freq);
	getch();
}