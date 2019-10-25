#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 256

int main()
{
	FILE *fptr1, *fptr2;
	int lno, linectr = 0;
	char str[MAX],fname[MAX];
	char newln[MAX], temp[] = "temp.txt";
	clrscr();
		printf("\n\n Replace a specific line in a text file with a new text :\n");
		printf("-------------------------------------------------------------\n");
		printf(" Input the file name to be opened : ");
	fgets(fname, MAX, stdin);
	fname[strlen(fname) - 1] = '\0';
	fptr1 = fopen(fname, "r");
	if (!fptr1)
	{
		printf("Unable to open the input file!!\n");
		return 0;
	}
	fptr2 = fopen(temp, "w");
	if (!fptr2)
	{
		printf("Unable to open a temporary file to write!!\n");
		fclose(fptr1);
		return 0;
	}
	printf(" New content of the new line : ");
	fgets(newln, MAX, stdin);
	printf(" Enter line Number to edit : ");
	scanf("%d", &lno);
	lno;
	while (!feof(fptr1))
	{
	    strcpy(str, "\0");
	    fgets(str, MAX, fptr1);
	    if (!feof(fptr1))
	    {
		linectr++;
		if (linectr != lno)
		    {
			fprintf(fptr2, "%s", str);
		    }
		    else
		    {
			fprintf(fptr2, "%s", newln);
		    }
		}
	}
	fclose(fptr1);
	fclose(fptr2);
	remove(fname);
	rename(temp, fname);
	printf(" Replacement did successfully..!! \n");
	fptr1 = fopen(fname, "r");
	printf("\n\tContent After Edit ..\n");
	while(!feof(fptr1))
	{
		fgets(str, MAX, fptr1);
		printf("%s",str);
	}
	fclose(fptr1);
	getch();
	return 0;
}