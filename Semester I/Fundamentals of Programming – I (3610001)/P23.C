#include<stdio.h>
#include<conio.h>

void cal(int [],int);

void main()
{
	int arr[15],n,i;
	clrscr();
	printf("\n\tEnter Size of array:::¯--->");
	scanf("%d",&n);
	printf("\n\tEnter Element In Array....");
	for(i=0;i<n;i++)
	{
		printf("\n\tarr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\tarr[%d]=%d",i,arr[i]);
	}
	cal(arr,n);
	getch();
}
void cal(int arr[],int n)
{
	int i,sum=0;
	float avg;
	printf("\n");
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("\n\tSum of an array is :::¯--->%d",sum);
	printf("\n\tAverage of an array is:::¯--->%.2f",avg);
}