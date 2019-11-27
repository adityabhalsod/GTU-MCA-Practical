#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,rem;
	clrscr();
	printf("\n\tEnter 3 Digit Number :-");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\tSum :-%d",sum);
	getch();
}