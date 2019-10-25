/*
Program : 14
8-Puzzle and 16-Puzzle
*/
#include<stdio.h>
#include<conio.h>

int m=0,n=3;

int cal(int temp[10][10],int t[10][10])
{
	int i,j,m=0;
	for(i=0;i < n;i++)
	{
		for(j=0;j < n;j++)
		{
			if(temp[i][j] != 0)
			{
				if(temp[i][j]!=t[i][j])
				{
					m++;
				}
			}
		}
		}
	return m;
}

int check(int a[10][10],int t[10][10])
{
	int i,j,f=1;
	for(i=0;i < n;i++)
	{
		for(j=0;j < n;j++)
		{
			if(a[i][j]!=t[i][j])
				return 0;
		 }
	}

	return 1;
}


void main()
{
	int p,i,j,a[10][10],t[10][10],temp[10][10],r[10][10];
	int m=0,x=0,y=0,d=1000,dmin=0,l=0;
	printf("\nEnter the matrix to be solved,space with zero :\n");
	for(i=0;i < n;i++)
		for(j=0;j < n;j++)
			scanf("%d",&a[i][j]);

	printf("\nEnter the target matrix,space with zero :\n");
	for(i=0;i < n;i++)
		for(j=0;j < n;j++)
			scanf("%d",&t[i][j]);

	printf("\nEntered Matrix is :\n");
	for(i=0;i < n;i++)
	{
		for(j=0;j < n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}

	printf("\nTarget Matrix is :\n");
	for(i=0;i < n;i++)
	{
		for(j=0;j < n;j++)
			printf("%d\t",t[i][j]);
		printf("\n");
	}

	while(!(check(a,t)))
	{
		//l++;
		d=1000;
		for(i=0;i < n;i++)
		{
			for(j=0;j < n;j++)
			{
				if(a[i][j]==0)
				{
					x=i;
					y=j;
				}
			}
		 }
		//To move upwards
		for(i=0;i < n;i++)
			for(j=0;j < n;j++)
				temp[i][j]=a[i][j];

		if(x!=0)
		{
			p=temp[x][y];
			temp[x][y]=temp[x-1][y];
			temp[x-1][y]=p;
		}
		dmin=cal(temp,t);
		//dmin=l+m;
		if(dmin < d)
		{
			d=dmin;
			for(i=0;i < n;i++)
				for(j=0;j < n;j++)
					r[i][j]=temp[i][j];
		}

		//To move downwards
		for(i=0;i < n;i++)
			for(j=0;j < n;j++)
				temp[i][j]=a[i][j];
		if(x!=n-1)
		{
			p=temp[x][y];
			temp[x][y]=temp[x+1][y];
			temp[x+1][y]=p;
		}
		dmin=cal(temp,t);
		//dmin=l+m;
		if(dmin < d)
		{
			d=dmin;
			for(i=0;i < n;i++)
				for(j=0;j < n;j++)
					r[i][j]=temp[i][j];
		}

		//To move right side
		for(i=0;i < n;i++)
			for(j=0;j < n;j++)
				temp[i][j]=a[i][j];
		if(y!=n-1)
		{
			p=temp[x][y];
			temp[x][y]=temp[x][y+1];
			temp[x][y+1]=p;
		}
		dmin=cal(temp,t);
		//dmin=l+m;
		if(dmin < d)
		{
			d=dmin;
			for(i=0;i < n;i++)
				for(j=0;j < n;j++)
					r[i][j]=temp[i][j];
		}

		//To move left
		for(i=0;i < n;i++)
			for(j=0;j < n;j++)
				temp[i][j]=a[i][j];
		if(y!=0)
		{
			p=temp[x][y];
			temp[x][y]=temp[x][y-1];
			temp[x][y-1]=p;
		}
		dmin=cal(temp,t);
		//dmin=l+m;
		if(dmin < d)
		{
			d=dmin;
			for(i=0;i < n;i++)
				for(j=0;j < n;j++)
					r[i][j]=temp[i][j];
		}

		printf("\nCalculated Intermediate Matrix Value :\n");
		for(i=0;i < n;i++)
		{
			for(j=0;j < n;j++)
			  printf("%d\t",r[i][j]);
			printf("\n");
		}
		for(i=0;i < n;i++)
			for(j=0;j < n;j++)
			{
			  a[i][j]=r[i][j];
			  temp[i][j]=0;
			}
		printf("Minimum cost : %d\n",d);
	}
	getch();
} 
