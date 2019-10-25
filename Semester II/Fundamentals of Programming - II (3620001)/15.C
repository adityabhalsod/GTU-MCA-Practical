#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *all,*even,*odd;
	int number,i,records;
	clrscr();
	printf("INPUT THE TOTAL NUMBER OF RECORDS THAT U WANT TO ENTER...");
	scanf("%d",&records);
	all=fopen("ANYNUMBER","w");
	for(i=1;i<=records;i++)
	{
		putw(i,all);
	}
	fclose(all);
	all=fopen("ANYNUMBER","r");
	printf("\n\tTHE ALL NUMBERS ARE..");
	while((number=getw(all))!=EOF)
		printf(" %d",number);
	fclose(all);
	all=fopen("ANYNUMBER","r");
	even=fopen("EVENNUMBER","w");
	odd=fopen("ODDNUMBER","w");
	while((number=getw(all))!=EOF)
	{
		putw(number,all);
		if(number%2==0)
		putw(number,even);
		else
		putw(number,odd);
	}
	fclose(all);
	fclose(even);
	fclose(odd);
	all=fopen("ALLNUMBER","r");
	even=fopen("EVENNUMBER","r");
	odd=fopen("ODDNUMBER","r");
	printf("\n\tTHE EVEN NUMBERS ARE..");
	while((number=getw(even))!=EOF)
		printf(" %d",number);
	printf("\n\tTHE ODD NUMBERS ARE..");
		while((number=getw(odd))!=EOF)
	printf(" %d",number);
	fclose(even);
	fclose(odd);
	getch();
}