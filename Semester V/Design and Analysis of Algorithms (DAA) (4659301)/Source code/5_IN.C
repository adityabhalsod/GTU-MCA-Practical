/*
Program : 5
Determine product of 2 integers (a * b) as repeated sums. Iterative and recursive algorithms are possible
-->Iterative method
*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,i,ans=0;

	// clrscr();

	printf("Enter number of A-->");
	scanf("%d",&a);

	printf("Enter number of B-->");
	scanf("%d",&b);

	for (i = 1; i<=b; i++)
	{
		ans=ans+a;
	}


	printf("Answer-->%d", ans);
	getch();
	return 0;
}