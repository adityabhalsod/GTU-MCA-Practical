/*
Program : 1
Find square root of a number. 
Can we use Divide & Conquer approach for this problem? 
Can we have a still better algorithm to solve the problem?
*/
#include<stdio.h>
#include<conio.h>
int floorSqrt(int a);
int floorsqr(int b);
int main()
{
    int x;
    clrscr();
    printf("Enter n > ");
    scanf("%d",&x);

    printf("\nFirst method answer :- %d",floorSqrt(x));
    printf("\nSecond method answer:- %d",floorsqr(x));
    getch();
    return 0;
}
int floorSqrt(int x)
{
     int i = 1, result = 1;
    // Base cases
    if (x == 0 || x == 1)
	return x;

    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}
int floorsqr(int no)
{
	float sqrt,temp;
	sqrt=no/2;
	temp=0;

	while(sqrt!=temp)
	{
		temp=sqrt;
		sqrt=(no/temp+temp)/2;
	}
	return sqrt;
}