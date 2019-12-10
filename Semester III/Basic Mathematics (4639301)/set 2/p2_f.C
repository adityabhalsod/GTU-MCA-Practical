#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void scalar_product_matrix(int m,int n);

int a[8][8],b[8][8],i,j;
main()
{
	int m,n;
	
	printf("\n\t****Enter the Matrix****\n");
	
	printf("\tEnter the Value of m : ");
	scanf("%d",&m);
	
	printf("\tEnter the Value of n : ");
	scanf("%d",&n);
	
	create_matrix(m,n);
	print_matrix(m,n);
	
	scalar_product_matrix(m,n);
	
	getch();
}
void create_matrix(int m, int n)
{	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\tEnter matrix a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void print_matrix(int m,int n)
{
	printf("\n\tMatrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}	
}
void scalar_product_matrix(int m,int n)
{
	int k;
	
	printf("\n\tEnter the Constant k Value : ");
	scanf("%d",&k);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=k*a[i][j];	
		}
	}
	
	printf("\n\tResult is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\t",b[i][j]);	
		}
		printf("\n");
	}
}
