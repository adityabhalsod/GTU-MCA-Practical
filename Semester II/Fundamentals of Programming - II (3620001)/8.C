#include<stdio.h>
#include<conio.h>
void solve(int*,float*);
void main()
{
	int a[3];
	float *root;
	clrscr();
	printf("\n\tC program to calculate the roots of the quadratic equation..\n");
	printf("\n\tEnter the value of A.. ");
	scanf("%d",&a[0]);
	printf("\n\tEnter the value of B.. ");
	scanf("%d",&a[1]);
	printf("\n\tEnter the value of C.. ");
	scanf("%d",&a[2]);
	solve(a,root);
	if(root==NULL)
		printf("\n\tThe root is not possible..");
	else if(root[0]==root[1])
		printf("\n\tThe root is %.2f..",root[0]);
	else
		printf("\n\tThe roots are %.2f & %.2f..",root[0],root[1]);
	getch();
	return 0;
}
void solve(int *a,float *r)
{
	float d;
	d=a[1]*a[1]-4*a[0]*a[2];
	if(d<0)
	{
		r=NULL;
	}
	else if(d==0)
	{
		r[0]=r[1]=-a[1]/(2*a[0]);
	}
	else
	{
		r[0]=-a[1]/(2*a[0]);
		r[1]=-a[1]/(2*a[0]);
	}
}