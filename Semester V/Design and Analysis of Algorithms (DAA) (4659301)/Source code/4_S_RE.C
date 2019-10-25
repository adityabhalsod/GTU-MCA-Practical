/*
Program : 4
Find Xn. Iterative and recursive algorithms are possible with complexity log 2n
-->Recursive method using Simple algorithms
*/
#include <stdio.h>
#include <conio.h>
int count = 0;
long long power(int x,int y)
{

	if (y==0)
	{
		count++;
		return 1;
	}
	else
	{
		count++;
		return (x*power(x,y-1));
	}
}
int main()
{
    int base, exponent;

    // clrscr();
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);



    printf("Answer = %lld\n", power(base,exponent));
    printf("Counting number -->%d", count);
    getch();
    return 0;
}