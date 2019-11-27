#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,c=1,n;
	clrscr();

	printf("\n\tEnter Number Of Rows:::¯--->");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d",c);
			c++;
		}
		c--;
		for(j=i+1;j<=n;j++)
		{
			c--;
			printf("%d",c);

		}
		printf("\n");
	}
	getch();
}