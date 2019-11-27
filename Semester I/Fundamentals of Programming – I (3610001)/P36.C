#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sp=0,big=0,weird=0,sca=0;
	clrscr();
	printf("\n\tEnter Number :-");
	scanf("%d",&n);
	if(n%15==0)
	{
		printf("\n\tSpecial");
		sp=1;
	}
	if(n>999)
	{
		printf("\n\tBig");
		big=1;
	}
	if(n%5==0 && n%6==0 && n%18!=0 )
	{
		printf("\n\tWeird");
		weird=1;
	}
	if(big==1  || weird==1)
	{
		printf("\n\tScary");
		sca=1;
	}
	if(sp==1 && sca!=1)
	{
		printf("\n\t%d is Special but Not Scary",n);
	}
	getch();
}