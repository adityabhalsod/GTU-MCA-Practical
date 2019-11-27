#include<stdio.h>
#include<conio.h>

void sort(int [],int);
void merge(int [],int [],int [],int,int);
void ip(int [],int);
void op(int [],int);

void main()
{
	int a[10],b[10],c[20],n,m;
	clrscr();
	printf("\n\tEnter Size of First Array:::¯--->");
	scanf("%d",&n);
	ip(a,n);
	printf("\n\tEnter Size of Second Array:::¯--->");
	scanf("%d",&m);
	ip(b,m);
	sort(a,n);
	sort(b,m);
	printf("\n\tFirst:-\t\t");
	op(a,n);
	printf("\n\tSecond:-\t");
	op(b,m);
	merge(a,b,c,n,m);
	printf("\n\tThird:-\t\t");
	op(c,n+m);

	getch();
}
void merge(int a[],int b[],int c[],int n,int m)
{
	int i=0,j=0,k=0;
		while(i<n && j<m)
		{
			if(a[i]>b[j])
			{
				 c[k]=b[j];
				 k++;
				 j++;
			}
			else
			{
				c[k]=a[i];
				k++;
				i++;
			}
		}
		while(i<n)
		{
			c[k]=a[i];
			k++;
			i++;
		}
		while(j<m)
		{
			c[k]=b[j];
			k++;
			j++;

		}
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void ip(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\tarray[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void op(int arr[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}