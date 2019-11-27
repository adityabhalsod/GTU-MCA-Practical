#include<stdio.h>
#include<conio.h>

int i,j,m,n,a[10][10],b[10][10],c[10][10];;
void add();
void display(int [10][10]);

void main()
{
	clrscr();
	printf("\n\tEnter Number of rows of Matrix...");
	scanf("%d",&m);
	printf("\n\tEnter Number of columns of Matrix...");
	scanf("%d",&n);
	printf("\n\t---------------Enter Element in First Matrix -------------");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n\tEnter element at [%d] [%d]:::¯--->",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\t---------------Enter Element in Second Matrix -------------");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n\tEnter element at [%d] [%d]:::¯--->",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\t---------First Matrix----------\n");
	display(a);
	printf("\n\t---------Second Matrix----------\n");
	display(b);
	printf("\n\t------Addition---------\n");
	add();
	display(c);
	getch();
}
void display(int a[10][10])
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}
void add()
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}