#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem=0,temp,i;
	clrscr();
	printf("\n\tEnter Any Number:::¯---> ");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			rem+=i;
			printf("\t%d",rem);
		}
	       //	n=n/i;
	}
	printf("Addition | %d",rem);
	if(temp==rem)
	{
		printf("\n\tPerfect Number ...");
	}
	else
	{
		printf("\n\tNot Perfect Number...");
	}
	getch();
}