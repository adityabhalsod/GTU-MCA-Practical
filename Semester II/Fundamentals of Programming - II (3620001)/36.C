#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*fp1;
	int rno,n,i;
	char name[30];
	char file1[]="srudent.txt";
	char file2[]="data.txt";
	clrscr();
	fp=fopen(file1,"w");
	if(!fp)
		printf("\n\tFail to open file");
	printf("\n\tEnter number of record you want to enter..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	       printf("\n\tEnter %d Number.",i);
	       scanf("%d",&rno);
	       printf("\n\tEnter Name..");
	       fflush(stdin);
	       gets(name);
	       fprintf(fp,"%d\t%s\n",rno,name);
	}
	fclose(fp);
	fp=fopen(file1,"r");
	fp1=fopen(file2,"w");
	printf("\n\tContent of Student file..");
	while(fscanf(fp,"%d %s",&rno,name)!=EOF)
	{
		printf("\n%d\t%s",rno,name);
		fprintf(fp1,"%d\t%s\n",rno,name);
	}
	fcloseall();
	fp1=fopen(file2,"r");
	printf("\n\tContent of DATA file..");
	while(fscanf(fp1,"%d %s",&rno,name)!=EOF)
	{
		printf("\n%d\t%s",rno,name);
	}
	fcloseall();
	getch();
}