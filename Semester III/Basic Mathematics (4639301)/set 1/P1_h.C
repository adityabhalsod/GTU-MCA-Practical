#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int logicaland(int x,int y);
int logicalor(int x,int y);
int logicalnot(int x);
int logicalxor(int x,int y);

main()
{
	int a,b,choice;
	
	printf("\n************MENU******************\n");
	printf("\t1. Logical And\n\t2. Logical OR\n\t3. Logical Not\n\t4. Logical Xor\n\t5. Exit\n");
	printf("\n**********************************\n");
	
	printf("\nEnter Your Choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the value of a : (1 = true or 0 = false) : ");
			scanf("%d",&a);
			
			printf("Enter the value of b : (1 = true or 0 = false) : ");
			scanf("%d",&b);
			
			logicaland(a,b);
			
			break;
		case 2:
			printf("Enter the value of a : (1 = true or 0 = false) : ");
			scanf("%d",&a);
			
			printf("Enter the value of b : (1 = true or 0 = false) : ");
			scanf("%d",&b);
			
			logicalor(a,b);
			
			break;
		case 3:
			printf("Enter the value of a : (1 = true or 0 = false) : ");
			scanf("%d",&a);
			
		
			logicalnot(a);
			
			break;
		case 4:
			printf("Enter the value of a : (1 = true or 0 = false) : ");
			scanf("%d",&a);
			
			printf("Enter the value of b : (1 = true or 0 = false) : ");
			scanf("%d",&b);
			
			logicalxor(a,b);
			
			break;
		case 5:
			break;
		default:
			printf("\nBad Choice\n");
	}
	getch();
}

int logicaland(int x,int y)
{
	if(x==0 && y==0)
	{
		printf("false");
	}
	else if(x==0 && y==1)
	{
		printf("false");
	}
	else if(x==1 && y==0)
	{
		printf("false");
	}
	else if(x==1 && y==1)
	{
		printf("true");
	}
	else
	{
		printf("Not Valid");
	}
}
int logicalor(int x,int y)
{
	if(x==0 && y==0)
	{
		printf("false");
	}
	else if(x==0 && y==1)
	{
		printf("true");
	}
	else if(x==1 && y==0)
	{
		printf("true");
	}
	else if(x==1 && y==1)
	{
		printf("true");
	}
	else
	{
		printf("Not Valid");
	}	
}
int logicalnot(int x)
{
	if(x==1)
	{
		printf("false");
	}
	else if(x==0)
	{
		printf("true");
	}
	else
	{
		printf("Not Valid");
	}
}
int logicalxor(int x,int y)
{
	if(x==0 && y==0)
	{
		printf("true");
	}
	else if(x==0 && y==1)
	{
		printf("false");
	}
	else if(x==1 && y==0)
	{
		printf("false");
	}
	else if(x==1 && y==1)
	{
		printf("true");
	}
	else
	{
		printf("Not Valid");
	}
}
