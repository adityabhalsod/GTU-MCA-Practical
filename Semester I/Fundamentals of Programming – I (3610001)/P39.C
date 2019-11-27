#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,rem,temp;
	clrscr();
	printf("\n\tEnter Number:-");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rem+(rev*10);
		n=n/10;
	}
	printf("\n\tReverse Number Is:- %d",rev);
	if(temp==rev)
	{
		printf("\n\n\tPalindrom");

	}
	else
	{
		printf("\n\n\tNot Palindrom");
	}
	getch();
}