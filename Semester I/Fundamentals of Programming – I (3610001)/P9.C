#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch;
	clrscr();
	printf("\n\t1-Addition\n\t2-Subtract\n\t3-Multiplicaation\n\t4-Division");
	printf("\n\n\tEnter Your Choice:::¯--->");
	scanf("%d",&ch);
	printf("\n\tEnter Two Numbers...:::¯--->");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case 1:
			printf("\n\tAddition is:::¯---> %d",a+b);
			break;
		case 2:
			printf("\n\tSubstraction is:::¯---> %d",a-b);
			break;
		case 3:
			printf("\n\tMultiplication Is:::¯---> %d",a*b);
			break;
		case 4:
			printf("\n\tDivision Is:::¯---> %d",a/b);
			break;
		default:
			printf("\n\tInvalide Choice ..");
	}
	getch();
}