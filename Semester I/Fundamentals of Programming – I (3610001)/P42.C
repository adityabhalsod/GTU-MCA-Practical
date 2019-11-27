#include<stdio.h>
#include<conio.h>
void main()
{
	int i,vowel=0,ch=0;
	char str[40];
	clrscr();
	printf("\n\tEnter String:-");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i')
		{
			vowel++;
		}
		ch++;
	}
	printf("\n\tVowels=%d",vowel);
	printf("\n\tcharacter=%d",ch);
	getch();
}