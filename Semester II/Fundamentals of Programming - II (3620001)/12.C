#include<stdio.h>
#include<conio.h>
struct member
{
	char name[20];
	int code;
	int age;
	int weight;      // >50
	int height;            // >40
};
int main()
{
	int i,n,flag=0;
	struct member m[100];
	clrscr();
	do
	{
		printf("\n\tEner Number Of Members..");
		scanf("%d",&n);
	}while(n<0 && n>100);
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter Name , Code , age , weight , height of member...");
		scanf("%s",m[i].name);
		scanf("%d",&m[i].code);
		scanf("%d",&m[i].age);
		scanf("%d",&m[i].weight);
		scanf("%d",&m[i].height);
	}
	printf("\n-------------------------------------------------------------------------");
	printf("\n|\t\t\tMembers Information\t\t\t\t|");
	printf("\n-------------------------------------------------------------------------");
	printf("\n| Name\t|\tcode\t|\tAge\t|\tWeight\t|\tHeight\t|");
	printf("\n-------------------------------------------------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\n| %s\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|",m[i].name,m[i].code,m[i].age,m[i].weight,m[i].height);
	}
	printf("\n-------------------------------------------------------------------------");

	printf("\n-------------------------------------------------------------------------");
	printf("\n|\t\t\tHealthy Member Information\t\t\t|");
	printf("\n-------------------------------------------------------------------------");
	printf("\n| Name\t|\tcode\t|\tAge\t|\tWeight\t|\tHeight\t|");

	printf("\n-------------------------------------------------------------------------");

	for(i=0;i<n;i++)
	{
		if(m[i].weight>50&&m[i].height>40)
		{
				printf("\n| %s\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|",m[i].name,m[i].code,m[i].age,m[i].weight,m[i].height);
				flag=1;
		}
		else
			flag=0;

	}
	if(flag==0)
		printf("\n\tNo data..matched");
	getch();
		return (0);
}