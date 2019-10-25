#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp, *fp2;
    int p;
    char filename[100];
    clrscr();
    printf("Enter the file name from which you have to remove the extra blank spaces: ");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if (fp == NULL)
    {
		printf("File does n't exist");
		getch();
		return 0;
    }
    fp2 = fopen("newfile.txt","w");
    while((p=getc(fp))!=EOF)
    {
		if (p==32)
		{
			while((p=getc(fp))==32)
			{

			}
		}
		fputc(p,fp2);
    }

    fclose(fp);
    fclose(fp2);
    fp=fopen("newfile.txt","r");
    while((p=getc(fp))!=EOF)
    {
		printf("%c",p);
    }
    fcloseall();
    getch();
    return 0;
}