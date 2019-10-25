#include <stdio.h>
#include<conio.h>
int main()
{
    FILE *fileptr1, *fileptr2;
    char filename[40];
    char ch;
    int delete_line, temp = 1;
    clrscr();
    printf("Enter file name: ");
    scanf("%s", filename);
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
	while (ch != EOF)
    {
	      //	printf("%c", ch);
		ch = getc(fileptr1);
    }
    fclose(fileptr1);
    fileptr1 = fopen(filename, "r");
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    fileptr2 = fopen("replica.c", "w");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
		ch = getc(fileptr1);
		if (ch == '\n')
	    temp++;
	    if (temp != delete_line)
	    {
			putc(ch, fileptr2);
	    }
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filename);
    rename("replica.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    fileptr1 = fopen(filename, "r");

    while ((ch = getc(fileptr1)) != EOF)
    {
		printf("%c", ch);
    }
    fclose(fileptr1);
    getch();
   return 0;
}