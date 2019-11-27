#include<stdio.h>
#include<conio.h>

int arr[25],n,i;

void ip();
void op();
void small();
void large();
void avg();
void sum();

void main()
{
	int ch;
	clrscr();
	printf("\n\tEnter Array Size:::¯--->");
	scanf("%d",&n);
	ip();
	op();
	do
	{
		m:
		printf("\n\t1-Smallest\n\t2-Largest\n\t3-Average\n\t4-Summation\n\t5-Exit");
		printf("\n\n\t\t\tEnter Your Choice:::¯--->");
		scanf("%d",&ch);
		if(ch<1 || ch>5)
		{
			clrscr();
			printf("\n\tInvalide Choice...\n\t\t\tPlease Enter Valide Choice..");
			goto m;
		}
		switch(ch)
		{
			case 1:
			       //	clrscr();
				op();
				small();
				break;
			case 2:
			       //	clrscr();
				op();
				large();
				break;
			case 3:
				//clrscr();
				op();
				avg();
				break;
			case 4:
				//clrscr();
				op();
				sum();
				break;
		}
	}while(ch!=5);
}
void ip()
{
	printf("\n\tEnter Array element........\n\n");
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter %d element:::¯---> ",i+1);
		scanf("%d",&arr[i]);
	}
}
void op()
{
	printf("\n\n\tElements are..........");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
}
void small()
{
	int min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	printf("\n\n\t small:::¯--->%d \n",min);
}
void large()
{
	int max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("\n\n\t Large:::¯--->%d \n",max);
}
void avg()
{
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("\n\n\t Average :::¯--->%.2f \n",(sum/n));
}
void sum()
{
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("\n\tsum :::--->%d\n",sum);
}
