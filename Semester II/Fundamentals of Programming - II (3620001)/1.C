#include <stdio.h>
#define ROWS 4
#define COLS 3
void array_2D(int (*arr)[COLS]);
void array_1D(int *ptr);
void var(int *ptr);
int main ()
{

    int matrix[ROWS][COLS] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
    int arr[]={13,14,15,16,17};
    int a=10,*ptr1;
    int *ptr=arr;
    clrscr();
    *ptr1=a;
    printf("\n\tThe Basic Program to print Address of Variable And 1D 2D arrays...\n");
    printf("\n\tAddress of A Variable..");
    var(ptr1);
    printf("\n\tAddress of 1D Array Elements: \n");
    array_1D(ptr);
    printf("\n\tAddress of 2D Array Elements: \n");
    array_2D(matrix);

    getch();
    return 0;
}
void var(int *ptr)
{
	printf("\n%u",ptr);
}
void array_1D(int *ptr)
{
    int i;
    for (i = 0; i < ROWS; i++)
    {

	    printf("%u\t", (ptr+i));

	//ptr++;
	printf("\n");
    }
}
void array_2D(int (*arr)[COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
	for (j = 0; j < COLS; j++)
	{
	    printf("%u\t", (*(arr+i)+j));
	}
       //	arr++;
	printf("\n");
    }
}