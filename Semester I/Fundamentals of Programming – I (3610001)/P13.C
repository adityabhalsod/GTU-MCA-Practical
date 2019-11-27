#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	char oct[100] ;
	clrscr();
	printf("\n\tEnter Octal Number :::¯--->");
	scanf("%s",oct);
	printf("\n\n\tBinary :::¯--->");
	while(oct[i])
	{
		switch(oct[i])
		{
			case '0':
				printf("0 0 0 ");
				break;
			case '1':
				printf("0 0 1 ");
				break;
			case '2':
				printf("0 1 0 ");
				break;
			case '3':
				printf("0 1 1 ");
				break;
			case '4':
				printf("1 0 0 ");
				break;
			case '5':
				printf("1 0 1 ");
				break;
			case '6':
				printf("1 1 0 ");
				break;
			case '7':
				printf("1 1 1 ");
				break;
			default:
			{
				printf("\n\tInvalide Number %c",oct[i]);
				goto m;
			}
		}
		i++;
	}
	m:
	getch();

}