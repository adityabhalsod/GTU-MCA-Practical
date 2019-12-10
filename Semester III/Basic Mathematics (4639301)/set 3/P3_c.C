#include<stdio.h>
#include<conio.h>
int itrative_factorial(int no);
int recursivee_factorial(int no);
main()
{
	int no,fact,fact1;
	
	printf("Enter the Number : ");
	scanf("%d",&no);

	fact1=itrative_factorial(no);
	printf("The Itrative Factorial is  %d\n",fact1);
	
	fact=recursivee_factorial(no);
	printf("The Recursive Factorial is  %d\n",fact);
}
int itrative_factorial(int no)
{
	int f=1,i;
	
	for(i=1;i<=no;i++)
	{
		f=f*i;
	}
	return f;
}
int recursivee_factorial(int no)
{
	int fa;
	if(no==1)
	{
		return 1;
	}
	else
	{
		fa=no*recursivee_factorial(no-1);
		return fa;
	}
}
