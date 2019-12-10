#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void Transpose_matrix(int m,int n);
void print_Transpose_matrix(int m,int n);
int a[8][8],b[8][8],i,j;
main()
{
	int m,n;
	
	printf("\tEnter the Value of m : ");
	scanf("%d",&m);
	
	printf("\tEnter the Value of n : ");
	scanf("%d",&n);
	
	create_matrix(m,n);
	print_matrix(m,n);
	
	Transpose_matrix(m,n);
	
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

void Transpose_matrix(int m,int n)
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
		printf("\n");
	}
	print_Transpose_matrix(m,n);
}

void print_Transpose_matrix(int m,int n)
{
	printf("\n\tTranspose of Matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\t",b[i][j]);
		}
		printf("\n");
	}
}
