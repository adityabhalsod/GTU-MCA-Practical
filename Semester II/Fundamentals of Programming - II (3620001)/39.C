#include <stdio.h>
#include <conio.h>
struct std
{
	long roll;
	char name[30];
	int m1,m2,m3;
};
void append();
void dispall();
void main()
{
	int ch;
	struct std s;
	FILE *fp;
	clrscr();
	fp=fopen("result.txt","w");
	if(fp==NULL)
	{
		printf("\n ERROR IN OPENING FILE...");
		exit(0);
	}
	else
		printf("\n\tFile Created Successfull..");
	printf("\n ENTER Roll No:");
	scanf("%ld",&s.roll);
	printf("\n ENTER NAME:");
	fflush(stdin);
	scanf("%[^\n]",s.name);
	printf("\n ENTER Marks of sub - 1:");
	scanf("%d",&s.m1);
	printf("\n ENTER Marks of sub - 2:");
	scanf("%d",&s.m2);
	printf("\n ENTER Marks of sub - 3:");
	scanf("%d",&s.m3);
	fprintf(fp,"%ld \t%s\t%d\t%d\t%d\n",s.roll,s.name,s.m1,s.m2,s.m3);
	fprintf(fp,"%d",0);
	fclose(fp);
	while(1)
	{
		clrscr();
		dispall();
		printf("\n \t 1.INSERT RECORD");
		printf("\n \t 2.EXIT");
		printf("\n \t ENTER UR CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				exit(0);
		}
	}
}
void append()
{
	FILE *fp;
	struct std s;
	fp=fopen("result.txt","a");
	if(fp==NULL)
	{
		printf("\n ERROR IN OPENING FILE...");
		exit(0);
	}
	printf("\n ENTER Roll No:");
	scanf("%ld",&s.roll);
	printf("\n ENTER NAME:");
	fflush(stdin);
	scanf("%[^\n]",s.name);
	printf("\n ENTER Marks of sub - 1:");
	scanf("%d",&s.m1);
	printf("\n ENTER Marks of sub - 2:");
	scanf("%d",&s.m2);
	printf("\n ENTER Marks of sub - 3:");
	scanf("%d",&s.m3);
	fprintf(fp,"%ld \t%s\t%d\t%d\t%d\n",s.roll,s.name,s.m1,s.m2,s.m3);
	fprintf(fp,"%d",0);
	fclose(fp);
}
void dispall()
{
	FILE *fp;
	struct std s;
	fp=fopen("result.txt","r");
	if(fp==NULL)
	{
		printf("\n ERROR IN OPENING FILE...");
		exit(0);
	}
	printf("\n\tRoll No\tName\tMark1\tMark2\tMark3\n");
	printf("\n\t---------------------------------------\n");
	while(1)
	{
		fscanf(fp, "%ld",&s.roll);
		if(s.roll==0)
		break;
		fscanf(fp,"%s",s.name);
		fscanf(fp,"%d",&s.m1);
		fscanf(fp,"%d",&s.m2);
		fscanf(fp,"%d",&s.m3);
		printf("\t%ld \t%s\t%d\t%d\t%d\n",s.roll,s.name,s.m1,s.m2,s.m3);
	}
	fclose(fp);
}
