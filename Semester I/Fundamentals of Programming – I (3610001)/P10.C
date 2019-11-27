/*     This program checks the given number is prime or not prime. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=0;
	clrscr();
	printf("\n\tEnter Any Number:::¯--->");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		      flag=1;
		      break;
		}
	}
	if(flag==0)
	{
		printf("\n\tNumber Is Prime...");
	}
	else
	{
		printf("\n\tNumber Is Not Prime...");
	}
	getch();
}