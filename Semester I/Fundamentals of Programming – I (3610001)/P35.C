#include<stdio.h>
#include<conio.h>
int prime(int n);
void main()
{
	int num;
	clrscr();
	printf("\n\tEnter Number:::¯--->");
	scanf("%d",&num);
	printf("\n\t%d",prime(num));
	getch();
}
int prime(int num)
{
	int i;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			return	0;
		}
	}
	return 1;
}