#include<stdio.h>
#include<conio.h>
#define n 50
void sort(char *ptr);
void main()
{
	char *p;
	clrscr();
	printf("\n\tThe Program to sort the entered string..\n");
	printf("\n\tEnter String..");
	gets(p);
	printf("\n\tBefore Sorting... %s",p);

	sort(p);

	printf("\n\tAfter Sorting.. %s",p);
	getch();
}
void sort(char *ptr)
{
	int i,j;
	char temp;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(ptr[j]!=NULL && ptr[j-1]!=NULL)
			{
				if(ptr[j]<ptr[j-1])
				{
					temp=ptr[j];
					ptr[j]=ptr[j-1];
					ptr[j-1]=temp;
				}
			}
		}
	}
}