#include <stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	char argv[100];
	char ch;
	int linecount, wordcount, charcount;
	clrscr();
	linecount = 0;
	wordcount = 0;
	charcount = 0;
	printf("\n\tEnter File Name...");
	scanf("%s",argv);
	printf("Program Name Is: %s",argv);
	fp = fopen(argv,"r");
	if ( fp )
	{
		while ((ch=getc(fp)) != EOF) 
		{
			if (ch != ' ' && ch != '\n') { ++charcount; }
			if (ch == ' ' || ch == '\n') { ++wordcount; }
			if (ch == '\n') { ++linecount; }
		}
		if (charcount > 0) 
		{
			++linecount;
			++wordcount;
		}
	}
	else
    {
		printf("Failed to open the file\n");
	}
    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

	getch();
	return(0);
}