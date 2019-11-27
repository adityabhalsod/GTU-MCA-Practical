#include<stdio.h>
#include<conio.h>

int arr[100],i=0,j;

void dec_bin(int);
void dec_oct(int);
void dec_hex(int);
void dis();

void main()
{
	int n,ch;
	clrscr();
	do
	{
		clrscr();
		m:

		printf("\n\t1-Decimal to Binary\n\t2-Decimal to Octal\n\t3-Decimal to Hexa-Decimal\n\t4-Exit");

		printf("\n\t\tEnter Your Choice:::¯--->");
		scanf("%d",&ch);

		if(ch==4)
			break;
		else if(ch<1 || ch>3)
		{
			clrscr();
			printf("\n\nInvalide..! Please Enter Any Valide Choice...\n");
			goto m;
		}

		printf("\n\tEnter Decimal Number :::¯--->");
		scanf("%d",&n);

		switch(ch)
		{
			case 1:
				dec_bin(n);
				break;
			case 2:
				dec_oct(n);
				break;
			case 3:
				dec_hex(n);
				break;
		}
		getch();
	}while(1);
}
void dec_bin(int n)
{
	int n1=n;
	i=0;
	while(n!=0)
	{
		arr[i]=n%2;
		i++;
		n=n/2;
	}
	printf("\n\tDecimal\t\t:::¯--->%d",n1);
	printf("\n\tBinay \t\t:::¯--->");
	dis();
}
void dec_oct(int n)
{
	int n1=n;
	i=0;
	while(n!=0)
	{
		arr[i]=n%8;
		i++;
		n=n/8;
	}
	printf("\n\tDecimal\t\t:::¯--->%d",n1);
	printf("\n\tOctal \t\t:::¯--->");
	dis();
	printf("\n\tOctal %o",n1);
}
void dec_hex(int n)
{
	int n1=n;
	i=0;
	while(n!=0)
	{
		arr[i]=n%16;
		i++;
		n=n/16;
	}
	printf("\n\tDecimal\t\t:::¯--->%d",n1);
	printf("\n\tHexa-Decimal \t:::¯--->");
	dis();
	printf("\n\tHexa %x",n1);
}
void dis()
{
	for(j=i-1;j>=0;j--)
	{
		if(arr[j]==10)
			printf("A");
		else if(arr[j]==11)
			printf("B");
		else if(arr[j]==12)
			printf("C");
		else if(arr[j]==13)
			printf("D");
		else if(arr[j]==14)
			printf("E");
		else if(arr[j]==15)
			printf("F");
		else
			printf("%d",arr[j]);
	}
}
