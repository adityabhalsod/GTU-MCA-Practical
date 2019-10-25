#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
	int *ptr1,*ptr2;
	clrscr();
	printf("\n\tThe Basic Program to Swap two values..\n");
	printf("\n\tEnter Value1..");
	scanf("%d",(ptr1));
	printf("\n\tEnter Value2..");
	scanf("%d",(ptr2));
	printf("\n\tBefore Swaping..");
	printf("\n\t%d",*ptr1);
	printf("\n\t%d",*ptr2);
	swap(ptr1,ptr2);
	printf("\n\tAfter Swaping..");
	printf("\n\t%d",*ptr1);
	printf("\n\t%d",*ptr2);
	getch();
}
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}