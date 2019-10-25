#include<stdio.h>
#include<conio.h>
struct cricket
{
	char playerName[20];
	char teamName[20];
	float batAvg;

};
int main()
{
	struct cricket c;
	clrscr();
	printf("\n\tEnter Player Name ...");
	scanf("%s",c.playerName);
	printf("\n\tEnter Team Name ...");
	scanf("%s",c.teamName);
	printf("\n\tEnter Batting Average ...");
	scanf("%f",&c.batAvg);
	printf("\n\t-------------------------------------------------");
	printf("\n\t|   Player Name\t|   Team Name\t|   Batting Avg.");
	printf("\n\t-------------------------------------------------");
	printf("\n\t|\t%s\t|\t%s\t|\t %.2f\t",c.playerName,c.teamName,c.batAvg);
	printf("\n\t-------------------------------------------------");
	getch();
	return (0);
}