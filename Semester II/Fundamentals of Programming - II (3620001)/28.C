#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	char ch;
	clrscr();
	fp1 = fopen("file1.txt", "w");
	if(fp1)
	{
		printf("\nEnter text to write in file 1(press < enter > to save & quit):\n");
		while( (ch=getchar())!='\n')
		{
			putc(ch,fp1);
		}
	}
	else
	printf("\nError");
	fp2 = fopen("file2.txt", "w");
	if(fp2)
	{
		printf("\nEnter text to write in file 2(press < enter > to save & quit):\n");
		while( (ch=getchar())!='\n')
		{
			putc(ch,fp2);
		}
	}
	else
		printf("\nError");
    fclose(fp1);
	fclose(fp2);
	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "r");
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}
	fp3= fopen("file3.txt", "w");
	while ((ch = fgetc(fp1)) != EOF)
    fputc(ch, fp3);
	while ((ch = fgetc(fp2)) != EOF)
		fputc(ch, fp3);

	printf("Merged file1.txt and file2.txt into file3.txt");
    fclose(fp1);
	fclose(fp2);
	fclose(fp3);
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("file3.txt", "r");
    printf("\nContents of file1 is :");
    while( (ch=getc(fp1))!=EOF )
    {
		printf("%c",ch);
    }
	    printf("\nContents of file2 is :");

	    while( (ch=getc(fp2))!=EOF )
	    {
			printf("%c",ch);
	    } 
		printf("\nContents of file3 is :");
	    while( (ch=getc(fp3))!=EOF )
	    {
			printf("%c",ch);
	    }

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   getch();
   return 0;
}