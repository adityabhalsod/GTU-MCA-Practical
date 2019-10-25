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
	printf("\n\tEnter Content in the File..<press q to quit>");
	while((ch=getchar())!='q')
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("\n\tContent Of Demo1.txt:::¯--->");
	fopen("demo1.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	fp=fopen("demo1.txt","a");
	if(fp==NULL)
		printf("\n\tFile Not Created...");
	printf("\n\tEnter New line in the File..<press q to quit>");
	while((ch=getchar())!='q')
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("\n\tContent Of Demo1.txt:::¯--->");
	fopen("demo1.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
	return 0;
}