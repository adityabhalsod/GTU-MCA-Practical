/*
Program : 5
Determine product of 2 integers (a * b) as repeated sums. Iterative and recursive algorithms are possible
-->Recursive method
*/
#include <stdio.h>
#include <conio.h>
int sum(int a,int b)
{
	if (b!=0)
	{
		return (a+sum(a,b-1));
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a,b;

	// clrscr();

	printf("Enter number of A-->");
	scanf("%d",&a);

	printf("Enter number of B-->");
	scanf("%d",&b);


	printf("Answer-->%d", sum(a,b));
	getch();
	return 0;
}