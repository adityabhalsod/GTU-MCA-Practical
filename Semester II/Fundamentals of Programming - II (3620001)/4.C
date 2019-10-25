#include<stdio.h>
#include<conio.h>
#define ROWS 2
#define COLS 2

void input(int mat[ROWS][COLS]);
void display(int mat[ROWS][COLS]);
void add(int mat1[ROWS][COLS],int mat2[ROWS][COLS],int res[ROWS][COLS]);

int main()
{
	int a[ROWS][COLS],b[ROWS][COLS],ans[ROWS][COLS];
	clrscr();
	printf("\n\tC Program to add two matrix using pointer...\n");
	printf("\n\tEnter elements in first matrix..2x2 \n");
	input(a);

	printf("\n\tEnter elemetns in second matrix..2x2\n ");
	input(b);
	add(a,b,ans);

	printf("\n\tSum of first and second matrix: \n");
	display(ans);
	getch();

	return 0;
}
void input(int mat[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			scanf("%d",*(mat+i)+j);   //mat[i][j]
		}                                  //&*(*(mat+i)+j)
	}
}
void display(int mat[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			printf("%d\t",*(*(mat+i)+j));
		}
		printf("\n");
	}
}
void add(int mat1[][COLS], int mat2[][COLS], int res[][COLS])
{
    int i,j;
    for(i=0;i<ROWS;i++)
    {
	for(j=0;j<COLS;j++)
	{
	    *(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
	}
    }
}