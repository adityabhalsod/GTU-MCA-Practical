#include<stdio.h>
#include<conio.h>

int main()
{
	int *m1=0,*m2=0,*m3,i,j;
	int row,col;
	int * add(int *m1,int *m2,int row,int col);

	row=col=2;
	clrscr();
	printf("\n\tThe program for adding two matrix and return resultant matrix using pointer..\n");
	printf("\n\tEnter value for First Matrix of 2x2..");
	m1=(int*) malloc(sizeof(int)*row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",m1+i*col+j);
		}
	}
	printf("\n\tEnter Value in second matrix of 2x2..");
	m2=(int*) malloc(sizeof(int)*row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",m2+i*col+j);
		}
	}
	m3=(int*) malloc(sizeof(int)*row*col);
	m3=add(m1,m2,row,col);
	printf("\n\tAddition is..\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",*(m3+i*col+j));
		}
		printf("\n");
	}
	getch();
	return 0;
}

int * add(int *m1,int *m2,int row,int col)
{
	int *m3;
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			*(m3+i*col+j)=*(m1+i*col+j)+*(m2+i*col+j);
		}
	}
	return m3;
}
