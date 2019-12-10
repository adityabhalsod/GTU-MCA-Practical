#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void inverse_matrix(int m,int n);
void check_inverse(int m,int n);

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
	
	inverse_matrix(m,n);
	
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
void inverse_matrix(int m,int n)
{	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=b[j][i];
		}
	}
	
	printf("\n\tInverse of Second Matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("\t%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	check_inverse(m,n);
}
void check_inverse(int m,int n)
{
	int flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				if(a[i][j]==c[i][j])
				{
					flag=0;	
				}
				else
				{
					flag=1;
				}
		}
		printf("\n");
	}
	
	if(flag==0)
	{
		printf("\tTwo Matrices are same");
	}
	else
	{
		printf("\tTwo Matrices are not same");
	}
}

