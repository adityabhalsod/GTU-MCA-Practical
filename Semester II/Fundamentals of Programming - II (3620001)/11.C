#include<stdio.h>
#include<conio.h>
struct cricket
{
	char playerName[20];
	char teamName[20];
	double batAvg;

};
void design();
int main()
{
	int n,i;
	struct cricket c[50];
	clrscr();
	printf("\n\tEnter Number of Players ..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter %d Player Name , team name and batting average...",i+1);
		scanf("%s",c[i].playerName);
		scanf("%s",c[i].teamName);
		scanf("%ld",&c[i].batAvg);
	}
	design();
	printf("\n\t|   Player Name\t|   Team Name\t|   Batting Avg.|");
	design();
	for(i=0;i<n;i++)
	{
		printf("\n\t|\t%s\t|\t%s\t|\t %ld\t|",c[i].playerName,c[i].teamName,c[i].batAvg);
	}
	design();
	getch();
	return (0);
}
void design()
{
	printf("\n\t-------------------------------------------------");
}