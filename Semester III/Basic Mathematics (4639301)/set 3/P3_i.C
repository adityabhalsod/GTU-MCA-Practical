#include<stdio.h>
#include<conio.h>
int decimaltobinary(int);
int decimaltooctal(int);
int decimaltohexa(int);
main()
{
	int choice,decimal;


do
{
	printf("\n*******************Menu*********************\n");
	printf("1. Decimal to Binary \n2. Decimal to Octal \n3. Decimal to Hexa \n4. Exit \n");
	printf("********************************************\n");
	printf("Enter Your Choice : \n");
	scanf("%d",&choice);



	switch(choice)
	{
		case 1:
			printf("\nEnter a Decimal Number\n");
			scanf("%d",&decimal);
			decimaltobinary(decimal);
			break;
		case 2:
			printf("Enter a Decimal Number\n");
			scanf("%d",&decimal);
			decimaltooctal(decimal);
			break;

		case 3:
			printf("Enter a Decimal Number\n");
			scanf("%d",&decimal);
			decimaltohexa(decimal);
			break;
		case 4:
			printf("Exit");
			break;
		default:
			printf("Wrong Choice\n");
	}
}while(choice!=4);
	getch();
	return 0;
}
int decimaltobinary(int a)
{
	long int reminder,quotient;
	int binarynumber[100],i=1,j;

	quotient=a;

	while(quotient!=0)
	{
		binarynumber[i++]=quotient%2;
		quotient=quotient/2;
	}
	printf("Binary Value of Decimal Number %d is :  ",a);
	for(j=i-1;j>0;j--)
	{
			printf("%d",binarynumber[j]);
	}
	return binarynumber[j];
}
int decimaltooctal(int a)
{
	long int reminder,quotient;
	int octalnumber[100],i=1,j;

	quotient=a;

	while(quotient!=0)
	{
		octalnumber[i++]=quotient%8;
		quotient=quotient/8;
	}
	printf("Octal Value of Decimal Number %d is :  ",a);
	for(j=i-1;j>0;j--)
	{
			printf("%d",octalnumber[j]);
	}
	return octalnumber[j];
}
int decimaltohexa(int a)
{
	long int reminder,quotient;
	int temp,i=1,j;
	char hexadecimalnumber[100];

	quotient=a;

	while(quotient!=0)
	{
		temp=quotient%16;

		//to convert integer to character assci value
		if(temp < 10)
		{
			temp=temp+48;
		}
		else
		{
			temp=temp+55;
		}
		hexadecimalnumber[i++]=temp;
		quotient=quotient/16;
	}
	printf("Hexadecimal Value of Decimal Number %d is :  ",a);
	for(j=i-1;j>0;j--)
	{
			printf("%c",hexadecimalnumber[j]);
	}
	return hexadecimalnumber[j];
}


