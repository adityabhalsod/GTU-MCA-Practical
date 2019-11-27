#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem=0,rev=0;
	char arr[10][10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
	clrscr();
	printf("\n\tEnter Number :-");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	while(rev>0)
	{
		rem=rev%10;
		printf(" %s",arr[rem]);
		rev=rev/10;
	}
	getch();
}