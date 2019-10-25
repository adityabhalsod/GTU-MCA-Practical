#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *fp1, *fp2;
	int ch;
	char fname1[30], fname2[30];
	clrscr();
	printf("Enter source file:");
	fflush(stdin);
	scanf("%s", fname1);
	printf("Enter destination file:\n");
	fflush(stdin);
	scanf("%s", fname2);
	fp1 = fopen(fname1, "r");
	fp2 = fopen(fname2, "w");
	if(fp1 == NULL)
	{
		printf("Cannot open the file %s for reading\n", fname1);
		getch();
		exit(1); /* terminate program */
	}
	else if(fp2 == NULL)
	{
		printf("Cannot open the file %s for writing\n", fname2);
		getch();
		exit(1); /* terminate program */
	}
	else /* both fi les has been opened successfully */
	{
		ch = getc(fp1); /* read from source */
		while(ch != EOF)
		{
			putc(ch, fp2); /* copy to destination */
			ch = getc(fp1);
		}
		fclose(fp1); /* Now close the fi les */
		fclose(fp2);
		printf("Files successfully copied \n");
	}
	printf("\n\tContent of destination file...");
	fp2=fopen(fname2,"r");
	ch = getc(fp2); /* read from source */
	while(ch != EOF)
	{
		printf("%c",ch);
		ch = getc(fp1);
	}
	fclose(fp2);
	getch();
	return 0;
}