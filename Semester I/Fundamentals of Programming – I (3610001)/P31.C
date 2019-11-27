#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],find[40];
	int i,j,cnt=0,flag;
	clrscr();
	printf("\n\tEnter the string :");
	gets(str);
	printf("\n\tEnter the Key to find : ");
	gets(find);
	for(i=0;str[i];i++)
	{
		flag=0;
		if(str[i]==find[0])
		{
			flag=1;
			for(j=1;find[j];j++)
			{
				if(str[i+j]!=find[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			cnt++;
		}
	}
	printf("\n\t'%s' occurs in String %d times\n",find,cnt);
	getch();
}