#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void diagnal_matrix(int m,int n);
void upper_tringal_matrix(int m,int n);
void lower_tringal_matrix(int m,int n);


int a[8][8],b[8][8],c[8][8],i,j;
main()
{
	int m,n;
	
	printf("\tEnter the Value of m : ");
	scanf("%d",&m);
	
	printf("\tEnter the Value of n : ");
	scanf("%d",&n);
	create_matrix(m,n);
	
	print_matrix(m,n);
	
	diagnal_matrix(m,n);
	upper_tringal_matrix(m,n);
	lower_tringal_matrix(m,n);
	
	getch();
}
void create_matrix(int m, int n)
{	
	printf("\n\tEnter the Matrix : \n");
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
void diagnal_matrix(int m,int n)
{
	printf("\t\nYour Diagnal Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("\t%d\t",a[i][j]);	
			}
			else
			{
				printf("\t0\t");	
			}	
		}
		printf("\n");
	}	
}
void upper_tringal_matrix(int m,int n)
{
	printf("\t\nYour Upper Tringal is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				printf("\t%d\t",a[i][j]);	
			}
			else
			{
				printf("\t0\t");	
			}		
		}
		printf("\n");
	}		
}
void lower_tringal_matrix(int m,int n)
{
	printf("\t\nYour Lower Tringal is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("\t%d\t",a[i][j]);	
			}
			else
			{
				printf("\t0\t");	
			}		
		}
		printf("\n");
	}	
}
