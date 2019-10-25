/*
Program : 8
Sort a given sequence of numbers using 
(b) Merge Sort
*/
#include <stdio.h>
#include <conio.h>

void merge(int[],int,int,int);

void mergesort(int x[],int lb,int ub)
{
	int m;
	if(lb < ub)
	{
		m = (lb+ub)/2; // finds mid
		mergesort(x,lb,m);
		mergesort(x,m+1,ub);
		merge(x,lb,m,ub);
	}
}

/* utility function to sort elements in ascending order */
void merge(int x[],int lb,int m,int ub)
{
	int temp[20]={0},k=0;
	int i = lb;
	int j = m+1;
	while(i <= m && j <= ub)
	{
		if(x[i] < x[j])
			temp[k++] = x[i++];
		else
			temp[k++] = x[j++];
	}

	while(i<=m)
		temp[k++] = x[i++];
	while(j<=ub)
		temp[k++] = x[j++];

	//fetching back
	j=0;

	for(i=lb;i<=ub;i++)
		x[i] = temp[j++];
}

/* starting point of the program */
int main()
{
	int x[20]={0},i,n;
	// clrscr();
	printf("Enter the number of elements > ");
	scanf("%d", &n);
	printf("-- Enter the elements -- \n");

	for(i=0;i<n;i++)
	{
		printf("Array[%d]--",i+1);
		scanf("%d",&x[i]);
	}
	mergesort(x,0,n-1);

	printf("\n-- Sorted Array -- \n");

	for(i=0;i<n;i++)
	{
		if((i+1)==n)
			printf("%d", x[i]);
		else
			printf("%d, ", x[i]);
	}
getch();
return 0;
}