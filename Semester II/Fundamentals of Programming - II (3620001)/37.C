#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
	FILE *fp1, *fp2;
	char a;
	clrscr();
	fp1 = fopen("small.txt", "r");
	if (fp1 == NULL) 
	{
		puts("cannot open this file");
		getch();
		exit(1);
	}
	fp2 = fopen("CAPITAL.txt", "w");
	if (fp2 == NULL)
	{
		puts("Not able to open this file");
		fclose(fp1);
		getch();
		exit(1);
	}

	do
	{
		a = fgetc(fp1);
		a = toupper(a);
		fputc(a, fp2);
	}while (a != EOF);
	printf("\n\tPrinted Suceess");
	fcloseall();
	fp1=fopen("small.txt","r");
	fp2=fopen("CAPITAL.txt","r");
	printf("\n\tSmall.txt\n------------------------\n");
	a=fgetc(fp1);
	while(a!=EOF)
	{
		printf("%c",a);
		a=fgetc(fp1);
	}
	printf("\n\tCapital.txt\n-------------------\n");
	a=fgetc(fp2);
	while(a!=EOF)
	{
		printf("%c",a);
		a=fgetc(fp2);
	}
	fcloseall();
	getch();
}