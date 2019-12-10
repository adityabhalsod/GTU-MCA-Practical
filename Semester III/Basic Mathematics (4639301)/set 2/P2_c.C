#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void check_null(int m,int n);
void check_unit_identity(int m,int n);
int a[8][8],i,j,flag=0;
main()
{
	int m,n;
	
	printf("\tEnter the Value of m : ");
	scanf("%d",&m);
	
	printf("\tEnter the Value of n : ");
	scanf("%d",&n);
	
	create_matrix(m,n);
	print_matrix(m,n);
	
	check_null(m,n);
	check_unit_identity(m,n);
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

void check_null(int m,int n)  //all Element is 0
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
		printf("\n");
	}
	
	if(flag==0)
	{	
		printf("\n\tThat is a Null Matrix");
	}
	else
	{
		printf("\n\tThat is not a Null Matrix");
	}	
}
void check_unit_identity(int m,int n)  //diagnal element are all 1
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && a[i][j]==1)
			{
				flag=0;
			}
			else if(i!=j && a[i][j]==0)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
		printf("\n");
	}
	
	if(flag==0)
	{	
		printf("\n\tThat is a Unit or Identity Matrix");
	}
	else
	{
		printf("\n\tThat is not a Unit or Identity Matrix");
	}	
}



