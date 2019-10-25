#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("demo1.txt","w");
	if(fp==NULL)
		printf("\n\tFile Not Created...");
	else
		printf("\n\tFile created Successfull....");
	printf("\n\tEnter Content in the File..");
	while((ch=getchar())!='\n')
	{
		putc(ch,fp);
	}
	printf("\n\tcontent in file...");
	fcloseall();
	fp=fopen("demo1.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);

	}
	getch();
	return 0;
}