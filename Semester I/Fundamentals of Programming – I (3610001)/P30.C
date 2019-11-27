#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	float b;
	double c;
	clrscr();
	printf("\n\tSize of int Variable is %d byte.",sizeof(a));
	printf("\n\tSize of float Variable is %d byte.",sizeof(b));
	printf("\n\tSize of double Variable is %d byte.",sizeof(c));
	getch();
}