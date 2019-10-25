#include <conio.h>
#include <stdio.h>
#define buff 1000
int main(void)
{
    FILE *fileptr1, *fileptr2;

    char filechar[40];
    char c[buff],text[20];
    int delete_line, temp = 1;
    clrscr();

    printf("Enter file name: ");
    scanf("%s", filechar);
    fileptr1 = fopen(filechar, "r");

    //print the contents of file .
    while (fgets(c,buff,fileptr1))
    {
	printf("%s", c);
    }
    printf(" \n Enter line number to add a new line...");
    scanf("%d", &delete_line);
    fcloseall();
    fileptr1=fopen(filechar, "r");
    fileptr2 = fopen("replica.c", "w");

    temp=0;
    while (fgets(c,buff,fileptr1))
    {

	    temp++;
	    fputs(c,fileptr2);


	if (temp == delete_line-1)
	{
		printf("\n\tEnter New Line text...");
		fflush(stdin);
		gets(text);
		fputs(text,fileptr2);
		fputc('\n',fileptr2);
	}

    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filechar);
    rename("replica.c", filechar);
    fileptr1 = fopen(filechar, "r");

    while (fgets(c,buff,fileptr1))
    {
	printf("%s", c);
    }
    fclose(fileptr1);
    getch();
    return 0;
}