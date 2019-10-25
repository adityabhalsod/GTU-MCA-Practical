#include<stdio.h>
#include<conio.h>
#include<string.h>

char* findsubstr(char* str,int index,int substrlen);

void main()
{
	char ipstr[100];
	int index, substrlen;
	clrscr();
	printf("\n\tC program to find substring of a string using pointer..\n");
	printf("\n\tEnter a String...");
	gets(ipstr);
	printf("\n\tEnter starting position of substring...");
	scanf("%d",&index);
	printf("\n\tEnter Length of substring ..");
	scanf("%d",&substrlen);
	printf("\n\tSubstring is :");
	printf("%s ",findsubstr(ipstr,index,substrlen));
	getch();

}
char* findsubstr(char* ipstr,int index,int substrlen)
{
	char *substr;
	int i,ipstrlen=strlen(ipstr);
	if(index < 0 || index > ipstrlen || (index + substrlen) > ipstrlen)
	{
		printf("Invalid Input");
		return NULL;
	}
	for(i=1;i<=substrlen;i++)
	{
		substr[i]=ipstr[index++];
	}
	substr[i] = '\0';
	return substr;
}