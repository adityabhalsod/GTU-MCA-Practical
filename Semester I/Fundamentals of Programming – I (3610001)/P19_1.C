#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();

	printf("\n\tEnter Number Of Rows:::¯--->");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(k=n;k>=i;k--)
			printf("  ");

		for(j=1;j<=i;j++)
			printf("%d ",j);

		for(j=i-1;j>=1;j--)
			printf("%d ",j);

		printf("\n");
	}
	getch();
}