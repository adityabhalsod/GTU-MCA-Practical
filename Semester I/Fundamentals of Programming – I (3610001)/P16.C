#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t1=0,t2=1,next;
	clrscr();
	printf("\n\tEnter Value of N:::¯--->");
	scanf("%d",&n);
	printf("\n\tFibonacci Series :::¯--->");
	for(i=1;i<=n;i++)
	{
		printf(" %d",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	getch();
}