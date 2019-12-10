#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void multiplication_matrix(int m,int n);

int a[8][8],b[8][8],result[8][8],result1[8][8],i,j;
main()
{
	int m,n;
	
	printf("\tEnter the Value of m : ");
	scanf("%d",&m);
	
	printf("\tEnter the Value of n : ");
	scanf("%d",&n);
	create_matrix(m,n);
	
	print_matrix(m,n);
	
	multiplication_matrix(m,n);
	
	getch();
}
void create_matrix(int m, int n)
{	
	printf("\n\tEnter the First Matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\tEnter matrix a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\tEnter the Second Matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\tEnter matrix b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
}
void print_matrix(int m,int n)
{
	printf("\n\t1st Matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\t2nd Matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\t",b[i][j]);
		}
		printf("\n");
	}	
}
void multiplication_matrix(int m,int n)
{
	int sum,k;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			result[i][j]=sum;
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum+=b[i][k]*a[k][j];
			}
			result1[i][j]=sum;
		}
	}
	
	printf("\n\tMultiplication of Two Matrix (A*B) : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("\t%d\t",result[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\tMultiplication of Two Matrix (B*A) : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("\t%d\t",result1[i][j]);
		}
		printf("\n");
	}
}
