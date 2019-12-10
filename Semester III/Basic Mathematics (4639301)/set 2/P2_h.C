#include<stdio.h>
#include<conio.h>
void create_matrix(int m,int n);
void print_matrix(int m,int n);
void inverse_matrix(int m,int n);

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

void inverse_matrix(int m,int n)
{
	float determinant=0;
	int flag=0;

	for(i=0;i<m;i++)
	{
		determinant = determinant + (a[0][i]*(a[1][(i+1)%m]*a[2][(i+2)%m] - a[1][(i+2)%m]*a[2][(i+1)%m]));	
	}
      

   printf("\t\nInverse of matrix is: \n\n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
      		printf("\t%.2f\t",((a[(i+1)%n][(j+1)%n] * a[(i+2)%n][(j+2)%n]) - (a[(i+1)%n][(j+2)%n]*a[(i+2)%n][(j+1)%n]))/ determinant);
	  }     
       printf("\n");
   }
}
