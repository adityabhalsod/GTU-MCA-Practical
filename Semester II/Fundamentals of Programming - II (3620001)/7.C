#include<stdio.h>
#include<conio.h>
#include<string.h>
char* join(char*,char*);
void main()
{
	char *str1,*str2;
	clrscr();
	printf("\n\tC program to concatnate two string...\n");
	printf("\n\tEnter 1st string..");
	gets(str1);
	printf("\n\tEnter 2nd string ..");
	gets(str2);
	printf("Concatenated string is.. %s",join(str1,str2));
	getch();
}
char* join(char *str1,char *str2)
{
	int i,j=0;
	i=strlen(str1);
	while(str2[j])
	{
		str1[i++]=str2[j++];
	}
	return str1;
}