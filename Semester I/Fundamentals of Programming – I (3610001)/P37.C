#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n,rem,base[3];
	clrscr();
	printf("\n\tEnter Three Digit Number:-");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		base[i]=rem;
		i++;
	}
	printf("\n\t%d hundreds\n\t%d tens\n\t%d units",base[2],base[1],base[0]);
	getch();
}