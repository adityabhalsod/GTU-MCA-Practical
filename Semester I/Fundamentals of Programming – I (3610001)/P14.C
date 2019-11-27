#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\n\n\tEnter Value of N:::¯--->");
	scanf("%d",&n);

	printf("\n\t------for\n\n\t");
	for(i=1;i<=n;i++)
	{
		printf(" %d",i*i);
	}
	printf("\n\n\t-----while\n\n\t");
	i=1;
	while(i<=n)
	{
		printf(" %d",i*i);
		i++;
	}
	printf("\n\n\t-----do while\n\n\t");
	i=1;
	do
	{
		printf(" %d",i*i);
		i++;
	}while(i<=n);
	getch();
}