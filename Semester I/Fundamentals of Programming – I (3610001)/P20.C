#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\n\tEnter Number :::¯--->");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf(" %d",i);
			sum=sum+i;
		}
	}
	printf("\n\tSum of first %d odd number is :::¯--->%d",n,sum);
	getch();
}