#include<stdio.h>
#include<conio.h>
void print_matrix(int m,int n);
void check_reflexive(int m,int n);
void check_symmetric(int m,int n);
int mr[3][3],mrt[3][3],i,j,m,n;
main()
{	
	printf("Enter the value of m ");
	scanf("%d",&m);
	printf("Enter the value of n ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Mr[%d][%d] : ",i,j);
			scanf("%d",&mr[i][j]);
		}
	}
	
		
	check_reflexive(m,n);
	check_symmetric(m,n);
	getch();
}

void print_matrix(int m,int n)
{
	printf("Your Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mr[i][j]);
		}
		printf("\n");
	}
}

void check_reflexive(int m,int n)
{
	print_matrix(m,n);
	int flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && mr[i][j]==1)
			{
				flag++;	
			}
		}
	}
	if(flag==3)
	{
		printf("Relation is Reflexive\n");
	}
}
void check_symmetric(int m,int n)
{
	int flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			mrt[i][j]=mr[j][i];
		}
	}
	
	printf("Your  Matrix is : \n");
	print_matrix(m,n);
	
	printf("Your Transpose Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mrt[i][j]);
		}
		printf("\n");
	}
	
	
	//check
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mrt[i][j]==mr[i][j])
			{
				flag++;
			}
		}
	}
	
	if(flag==(m*n))
	{
		printf("Symmetric Matrix");
	}
	else
	{
		printf("Not Symmetric Matrix");
	}
}
