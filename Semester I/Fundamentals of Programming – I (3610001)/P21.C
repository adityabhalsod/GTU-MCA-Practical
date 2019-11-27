#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0,j;
	clrscr();
	printf("\n\tEnter Number :::¯--->");
	scanf("%d",&n);

	for(j=1;j<n;j++)
	{
		flag=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("\t %d\t",j);
		}
	}
	getch();
}